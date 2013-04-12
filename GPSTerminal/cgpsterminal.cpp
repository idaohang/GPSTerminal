#include "cgpsterminal.h"
#include "ui_cgpsterminal.h"
//---------------------------------------------------------------------------------------------------------------------------------------------------
CGPSTerminal::CGPSTerminal(QWidget *parent) : QMainWindow(parent), m_ui(new Ui::CGPSTerminal)
{
    m_ui->setupUi(this);
    m_port = new QSerialPort;

     this->loadSettings();

    connect(m_ui->m_tbUpdateListPort, SIGNAL(clicked()), this, SLOT(slotUpdateListPorts()));
    connect(m_ui->m_pbOpenPort, SIGNAL(clicked()), this, SLOT(slotOpenPort()));
    connect(m_port, SIGNAL(readyRead()), this, SLOT(slotReadData()));
}
//-----------------------------------------------
CGPSTerminal::~CGPSTerminal()
{
    delete m_ui;
}
//----------------------------------------------------------
void CGPSTerminal::slotUpdateListPorts()
{
    m_ui->m_cbPortList->clear();

    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        m_ui->m_cbPortList->addItem(info.portName());
        qDebug() << tr("Порт: ") << info.portName();
    }
}
//-------------------------------------------------
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
//-------------------------------------------------
void CGPSTerminal::slotOpenPort()
{
    m_port->setPortName("\\\\.\\" + m_ui->m_cbPortList->currentText());

    if(m_port->isOpen())
    {
        m_port->close();
        m_ui->m_pbOpenPort->setText(tr("Открыть"));
        m_ui->statusBar->showMessage(tr("Порт закрыт"));
        m_ui->m_pbOpenPort->setChecked(false);
    }
    else
    {
        if(m_port->open(QIODevice::ReadWrite))
        {
            if(m_port->setBaudRate(m_ui->m_cbSpeedList->itemData(m_ui->m_cbSpeedList->currentIndex()).toInt())
                    && m_port->setDataBits(QSerialPort::Data8) && m_port->setParity(QSerialPort::NoParity)
                    && m_port->setStopBits(QSerialPort::OneStop) && m_port->setFlowControl(QSerialPort::NoFlowControl))
            {
                m_ui->statusBar->showMessage(tr("Порт: ") + m_port->portName() + tr(" открыт"));
            }
            else
            {
                m_port->close();
                QMessageBox::critical(this, tr("Error"), m_port->errorString());
                m_ui->statusBar->showMessage(tr("Open error"));
            }

            m_ui->m_pbOpenPort->setChecked(true);
            m_ui->m_pbOpenPort->setText(tr("Закрыть"));
        }
        else
        {
            QMessageBox::critical(this, tr("Error"), m_port->errorString());
            m_ui->statusBar->showMessage(tr("Configure error"));
        }
    }

    m_port->write("AT\r\n");
}
//------------------------------------------------
void CGPSTerminal::loadSettings()
{
    this->slotUpdateListPorts();
    this->setSpeedPort();

    m_ui->m_teTerminal->setPalette(QPalette(Qt::black));
    m_ui->m_teTerminal->setTextColor(QColor(Qt::green));

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
}
//------------------------------------------------
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
//--------------------------------------------------------------------------
void CGPSTerminal::closeEvent(QCloseEvent *event)
{
    saveSettings();
    QMainWindow::closeEvent(event);
}
//-------------------------------------------------
void CGPSTerminal::slotReadData()
{
    m_port->waitForReadyRead(200);
    QByteArray data = m_port->readAll();
    m_ui->m_teTerminal->append(data.data());
}
