/********************************************************************************
** Form generated from reading UI file 'cgpsterminal.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGPSTERMINAL_H
#define UI_CGPSTERMINAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CGPSTerminal
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *m_tbControlPanel;
    QWidget *tbGeneral;
    QVBoxLayout *verticalLayout;
    QGroupBox *m_gbPort;
    QGridLayout *gridLayout;
    QPushButton *m_pbOpenPort;
    QToolButton *m_tbUpdateListPort;
    QComboBox *m_cbPortList;
    QComboBox *m_cbSpeedList;
    QLabel *m_lblTextSpeed;
    QGroupBox *groupBox_2;
    QWidget *tab_2;
    QTextEdit *m_teTerminal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CGPSTerminal)
    {
        if (CGPSTerminal->objectName().isEmpty())
            CGPSTerminal->setObjectName(QStringLiteral("CGPSTerminal"));
        CGPSTerminal->resize(669, 509);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        CGPSTerminal->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/gpsterminal/image/telit.png"), QSize(), QIcon::Normal, QIcon::Off);
        CGPSTerminal->setWindowIcon(icon);
        centralWidget = new QWidget(CGPSTerminal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_tbControlPanel = new QTabWidget(centralWidget);
        m_tbControlPanel->setObjectName(QStringLiteral("m_tbControlPanel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_tbControlPanel->sizePolicy().hasHeightForWidth());
        m_tbControlPanel->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        m_tbControlPanel->setFont(font1);
        tbGeneral = new QWidget();
        tbGeneral->setObjectName(QStringLiteral("tbGeneral"));
        verticalLayout = new QVBoxLayout(tbGeneral);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_gbPort = new QGroupBox(tbGeneral);
        m_gbPort->setObjectName(QStringLiteral("m_gbPort"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_gbPort->sizePolicy().hasHeightForWidth());
        m_gbPort->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setBold(true);
        font2.setWeight(75);
        m_gbPort->setFont(font2);
        gridLayout = new QGridLayout(m_gbPort);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_pbOpenPort = new QPushButton(m_gbPort);
        m_pbOpenPort->setObjectName(QStringLiteral("m_pbOpenPort"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pbOpenPort->sizePolicy().hasHeightForWidth());
        m_pbOpenPort->setSizePolicy(sizePolicy2);
        m_pbOpenPort->setCheckable(true);

        gridLayout->addWidget(m_pbOpenPort, 0, 2, 1, 1);

        m_tbUpdateListPort = new QToolButton(m_gbPort);
        m_tbUpdateListPort->setObjectName(QStringLiteral("m_tbUpdateListPort"));

        gridLayout->addWidget(m_tbUpdateListPort, 0, 0, 1, 1);

        m_cbPortList = new QComboBox(m_gbPort);
        m_cbPortList->setObjectName(QStringLiteral("m_cbPortList"));

        gridLayout->addWidget(m_cbPortList, 0, 1, 1, 1);

        m_cbSpeedList = new QComboBox(m_gbPort);
        m_cbSpeedList->setObjectName(QStringLiteral("m_cbSpeedList"));

        gridLayout->addWidget(m_cbSpeedList, 1, 1, 1, 1);

        m_lblTextSpeed = new QLabel(m_gbPort);
        m_lblTextSpeed->setObjectName(QStringLiteral("m_lblTextSpeed"));
        m_lblTextSpeed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_lblTextSpeed, 1, 2, 1, 1);


        verticalLayout->addWidget(m_gbPort);

        groupBox_2 = new QGroupBox(tbGeneral);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font1);

        verticalLayout->addWidget(groupBox_2);

        m_tbControlPanel->addTab(tbGeneral, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        m_tbControlPanel->addTab(tab_2, QString());

        horizontalLayout->addWidget(m_tbControlPanel);

        m_teTerminal = new QTextEdit(centralWidget);
        m_teTerminal->setObjectName(QStringLiteral("m_teTerminal"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        m_teTerminal->setFont(font3);

        horizontalLayout->addWidget(m_teTerminal);

        CGPSTerminal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CGPSTerminal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 23));
        CGPSTerminal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CGPSTerminal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CGPSTerminal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CGPSTerminal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial Black"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        statusBar->setFont(font4);
        CGPSTerminal->setStatusBar(statusBar);

        retranslateUi(CGPSTerminal);

        QMetaObject::connectSlotsByName(CGPSTerminal);
    } // setupUi

    void retranslateUi(QMainWindow *CGPSTerminal)
    {
        CGPSTerminal->setWindowTitle(QApplication::translate("CGPSTerminal", "CGPSTerminal", 0));
        m_gbPort->setTitle(QApplication::translate("CGPSTerminal", "\320\237\320\276\321\200\321\202", 0));
        m_pbOpenPort->setText(QApplication::translate("CGPSTerminal", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        m_tbUpdateListPort->setText(QApplication::translate("CGPSTerminal", "R", 0));
        m_lblTextSpeed->setText(QApplication::translate("CGPSTerminal", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", 0));
        groupBox_2->setTitle(QApplication::translate("CGPSTerminal", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        m_tbControlPanel->setTabText(m_tbControlPanel->indexOf(tbGeneral), QApplication::translate("CGPSTerminal", "\320\236\320\261\321\211\320\270\320\265", 0));
        m_tbControlPanel->setTabText(m_tbControlPanel->indexOf(tab_2), QApplication::translate("CGPSTerminal", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class CGPSTerminal: public Ui_CGPSTerminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGPSTERMINAL_H
