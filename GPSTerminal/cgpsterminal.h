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
    //-------------------
    namespace Ui
    {
        class CGPSTerminal;
    }
    //--------------------------------------------------------------
    class CGPSTerminal : public QMainWindow
    {
        Q_OBJECT
        public:
            explicit CGPSTerminal(QWidget *parent = 0);
            ~CGPSTerminal();
        private:
            Ui::CGPSTerminal *m_ui;
            QSerialPort          *m_port;
        private:
            void setSpeedPort();
            void setSettings();
            void loadSettings();
            void saveSettings();
            void closeEvent(QCloseEvent *event);
        public slots:
            void slotUpdateListPorts();
            void slotOpenPort();
            void slotReadData();
    };
#endif // CGPSTERMINAL_H
