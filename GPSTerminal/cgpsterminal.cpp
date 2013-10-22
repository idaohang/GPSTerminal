#include "cgpsterminal.h"
#include "ui_cgpsterminal.h"
//-------------------------------------------------------------------------------------------
CGPSTerminal::CGPSTerminal(QWidget *parent) : QMainWindow(parent), m_ui(new Ui::CGPSTerminal)
{
    m_ui->setupUi(this);
    m_port = new QSerialPort;

    this->loadSettings();

    connect(m_ui->m_tbUpdateListPort, SIGNAL(clicked()), this, SLOT(slotUpdateListPorts()));
    connect(m_ui->m_pbOpenPort, SIGNAL(clicked()), this, SLOT(slotOpenPort()));
    connect(m_port, SIGNAL(readyRead()), this, SLOT(slotReadData()));
    connect(m_ui->m_pbListScriptModule, SIGNAL(clicked()), this, SLOT(slotClickButton()));
    connect(m_ui->m_pbReadScripts, SIGNAL(clicked()), this, SLOT(slotReadScripts()));
}
//---------------------------
CGPSTerminal::~CGPSTerminal()
{
    delete m_ui;
}
//--------------------------------------
void CGPSTerminal::slotUpdateListPorts()
{
    m_ui->m_cbPortList->clear();

    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        if(info.portName().at(0) == 'C')
            m_ui->m_cbPortList->addItem(info.portName());
    }
}
//-------------------------------
void CGPSTerminal::setSpeedPort()
{
    m_ui->m_cbSpeedList->clear();

    m_ui->m_cbSpeedList->addItem(QLatin1String("1200"), QSerialPort::Baud1200);
    m_ui->m_cbSpeedList->addItem(QLatin1String("2400"), QSerialPort::Baud2400);
    m_ui->m_cbSpeedList->addItem(QLatin1String("4800"), QSerialPort::Baud4800);
    m_ui->m_cbSpeedList->addItem(QLatin1String("9600"), QSerialPort::Baud9600);
    m_ui->m_cbSpeedList->addItem(QLatin1String("19200"), QSerialPort::Baud19200);
    m_ui->m_cbSpeedList->addItem(QLatin1String("38400"), QSerialPort::Baud38400);
    m_ui->m_cbSpeedList->addItem(QLatin1String("57600"), QSerialPort::Baud57600);
    m_ui->m_cbSpeedList->addItem(QLatin1String("115200"), QSerialPort::Baud115200);
}
//-------------------------------
void CGPSTerminal::slotOpenPort()
{
    m_port->setPortName("\\\\.\\" + m_ui->m_cbPortList->currentText());

    int baudRate = m_ui->m_cbSpeedList->itemData(m_ui->m_cbSpeedList->currentIndex()).toInt();

    QSerialPort::DataBits dataBits = QSerialPort::Data8;
    QSerialPort::Parity parity = QSerialPort::NoParity;
    QSerialPort::StopBits stopBits = QSerialPort::OneStop;
    QSerialPort::FlowControl flowControl = QSerialPort::HardwareControl;

    if(m_port->isOpen())
    {
        this->closePort();
    }
    else
    {
        if (m_port->open(QIODevice::ReadWrite))
        {
                if (m_port->setBaudRate(baudRate)
                        && m_port->setDataBits(dataBits)
                        && m_port->setParity(parity)
                        && m_port->setStopBits(stopBits)
                        && m_port->setFlowControl(flowControl))
                {
                    m_ui->statusBar->showMessage(tr("Порт ") + m_ui->m_cbPortList->currentText() + tr(" открыт"));
                    m_ui->m_pbOpenPort->setChecked(true);
                    m_ui->m_cbPortList->setDisabled(true);
                    m_ui->m_cbSpeedList->setDisabled(true);
                    m_ui->m_tbUpdateListPort->setDisabled(true);
                    m_ui->m_pbOpenPort->setText(tr("Закрыть"));
                    m_ui->m_teTerminal->setEnabled(true);
                    m_ui->m_pbListScriptModule->setEnabled(true);
                    m_ui->m_pbReadScripts->setEnabled(true);
                }
                else
                {
                    m_port->close();
                    QMessageBox::critical(this, tr("Error"), m_port->errorString());

                    m_ui->statusBar->showMessage(tr("Open error"));
                }
            }
            else
            {
                QMessageBox::critical(this, tr("Error"), m_port->errorString());

                m_ui->statusBar->showMessage(tr("Configure error"));
            }
    }
}
//-------------------------------
void CGPSTerminal::loadSettings()
{
    this->slotUpdateListPorts();
    this->setSpeedPort();

    QPalette p = palette();
        p.setColor(QPalette::Base, Qt::black);
        p.setColor(QPalette::Text, Qt::green);
    m_ui->m_teTerminal->setPalette(p);

    QSettings *settings = new QSettings(tr("settings/gpsterminal.ini"), QSettings::IniFormat);

    settings->beginGroup(tr("GEOMETRY"));
        restoreGeometry(settings->value(tr("APPLICATION")).toByteArray());
        restoreGeometry(settings->value(tr("STATE")).toByteArray());
    settings->endGroup();

    settings->beginGroup(tr("PORT"));
        int number = settings->value(tr("NUMBER"), 0).toInt();
        int speed = settings->value(tr("SPEED"), 0).toInt();
    settings->endGroup();

    m_ui->m_cbPortList->setCurrentIndex(number);
    m_ui->m_cbSpeedList->setCurrentIndex(speed);
    m_ui->statusBar->showMessage(tr("Порт закрыт"));
    m_ui->m_teTerminal->setDisabled(true);
    m_ui->m_pbListScriptModule->setDisabled(true);
    m_ui->m_pbReadScripts->setEnabled(false);

    m_ui->m_pbListScriptModule->setProperty("COMMAND", "AT#LSCRIPT");
    m_ui->m_pbListScriptModule->setProperty("NAME", tr(""));
    m_ui->m_pbListScriptModule->setProperty("TERMINAL", CGPSTerminal::MODULE_TERMINAL);

    m_ui->m_pbReadScripts->setProperty("COMMAND", "AT#RSCRIPT");
    m_ui->m_pbReadScripts->setProperty("NAME", tr(""));
    m_ui->m_pbReadScripts->setProperty("TERMINAL", CGPSTerminal::SCRIPT_TERMINAL);

    m_terminal.terminal_id = CGPSTerminal::MAIN_TERMINAL;
}
//-------------------------------
void CGPSTerminal::saveSettings()
{
    QSettings *settings = new QSettings(tr("settings/gpsterminal.ini"), QSettings::IniFormat);

    settings->beginGroup(tr("GEOMETRY"));
        settings->setValue(tr("APPLICATION"), this->saveGeometry());
        settings->setValue(tr("STATE"), this->saveState());
    settings->endGroup();

    settings->beginGroup(tr("PORT"));
        settings->setValue(tr("NUMBER"), m_ui->m_cbPortList->currentIndex());
        settings->setValue(tr("SPEED"), m_ui->m_cbSpeedList->currentIndex());
    settings->endGroup();

    settings->sync();
}
//-----------------------------------------------
void CGPSTerminal::closeEvent(QCloseEvent *event)
{
    saveSettings();
    QMainWindow::closeEvent(event);
}
//-------------------------------
void CGPSTerminal::slotReadData()
{
    QByteArray data = QByteArray(m_port->readAll());
    static QByteArray listData;
    QString strData;
    static QString strListData;

    switch(m_terminal.terminal_id)
    {
        case MAIN_TERMINAL:
            m_ui->m_teTerminal->insertPlainText(data);
        break;

        case MODULE_TERMINAL:
            strData = data;

            m_ui->m_lwListScriptModule->clear();
            m_ui->m_leCountFiles->clear();

            m_ui->m_teTerminal->insertPlainText(strData);

            if(strData.contains(QRegExp("OK\\r\\n$")))
            {
                strListData += strData;

                int pos = 0, count = 0;

                QRegExp regexp("\"([A-Za-z0-9]+\\.[A-Za-z0-9]+)\"");

                while((pos = regexp.indexIn(strListData, pos)) != -1)
                {
                    m_ui->m_lwListScriptModule->addItem(regexp.cap(1));
                    QString str = regexp.cap(1);
                    pos += regexp.matchedLength();
                    count++;
                }

                m_ui->m_leCountFiles->setText(QString::number(count));

                strListData = "";
                m_terminal.terminal_id = MAIN_TERMINAL;
            }
            else
            {
                strListData += strData;
            }
        break;

        case SCRIPT_TERMINAL:
            if(data.contains("OK\r\n"))
            {
                listData += data;

                QString strSub = "AT#RSCRIPT=" + m_terminal.property;
                listData.remove(listData.indexOf(strSub, 0), strSub.length());
                listData = listData.trimmed();
                strSub = "<<<";
                listData.remove(listData.indexOf(strSub, 0), strSub.length());

                strSub = "OK";
                listData.remove(listData.indexOf(strSub, 0), strSub.length());
                listData = listData.trimmed();

                qDebug() << "\nsize data = " << listData.size();
                QFile file("q:/" + m_terminal.property);
                file.open(QIODevice::WriteOnly);

                file.write(listData);
                file.close();

                m_terminal.terminal_id = MAIN_TERMINAL;
                listData = "";
            }
            else
            {
                listData += data;
            }
        break;
    }

   QScrollBar *bar = m_ui->m_teTerminal->verticalScrollBar();
   bar->setValue(bar->maximum());
}
//----------------------------
void CGPSTerminal::closePort()
{
    m_port->close();

    m_ui->m_pbOpenPort->setText(tr("Открыть"));
    m_ui->statusBar->showMessage(tr("Порт закрыт"));
    m_ui->m_pbOpenPort->setChecked(false);
    m_ui->m_cbPortList->setEnabled(true);
    m_ui->m_cbSpeedList->setEnabled(true);
    m_ui->m_tbUpdateListPort->setEnabled(true);
    m_ui->m_teTerminal->setDisabled(true);
    m_ui->m_pbListScriptModule->setDisabled(true);
}
//----------------------------------
void CGPSTerminal::slotClickButton()
{
    QPushButton *button = qobject_cast<QPushButton*>(this->sender());
    QString request = button->property("COMMAND").toString() + "\r\n";
    m_terminal.terminal_id = button->property("TERMINAL").toInt();

    writtenData(request);
}
//----------------------------------
void CGPSTerminal::slotReadScripts()
{
    QList<QListWidgetItem*> strListScripts = m_ui->m_lwListScriptModule->selectedItems();

    foreach (QListWidgetItem* item, strListScripts)
    {
        QString strCommand = "AT#RSCRIPT=" + item->text() + "\r\n";
        m_terminal.terminal_id = CGPSTerminal::SCRIPT_TERMINAL;
        m_terminal.property = item->text();

        writtenData(strCommand);
    }
}
//---------------------------------------------
void CGPSTerminal::writtenData(QString request)
{
    m_port->write(request.toLatin1());
}
