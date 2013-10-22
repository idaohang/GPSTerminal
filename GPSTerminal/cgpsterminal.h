#ifndef CGPSTERMINAL_H
    #define CGPSTERMINAL_H
    //------------------------------------
    #include <QMainWindow>
    #include <QtSerialPort/QSerialPort>
    #include <QtSerialPort/QSerialPortInfo>
    #include <QScreen>
    #include <QSettings>
    #include <QMessageBox>
    #include <QtDebug>
    #include <QByteArray>
    #include <QScrollBar>
    #include <QDataStream>
    //----------
    namespace Ui
    {
        class CGPSTerminal;
    }
    typedef struct TERMINAL_TYPE
    {
        int terminal_id; // id терминала куда будет осуществляться вывод информации
        QString property; // свойство - хранится дополнительная информация (н-р: имя скачиваемого файла)
    } TERMINAL;
    //-------------------------------------
    class CGPSTerminal : public QMainWindow
    {
        Q_OBJECT
        public:
            enum{MAIN_TERMINAL=1, MODULE_TERMINAL=2, SCRIPT_TERMINAL=4, TEST_TERMINAL=8};
            explicit CGPSTerminal(QWidget *parent = 0);
            ~CGPSTerminal();
        private:
            Ui::CGPSTerminal *m_ui;
            QSerialPort      *m_port;
            TERMINAL          m_terminal;
        private:
            void setSpeedPort();
            void setSettings();
            void loadSettings();
            void saveSettings();
            void writtenData(QString request);
            void closeEvent(QCloseEvent *event);
            void closePort();
        public slots:
            void slotUpdateListPorts();
            void slotOpenPort();
            void slotReadData();
            void slotClickButton();
            void slotReadScripts();
    };
#endif // CGPSTERMINAL_H
