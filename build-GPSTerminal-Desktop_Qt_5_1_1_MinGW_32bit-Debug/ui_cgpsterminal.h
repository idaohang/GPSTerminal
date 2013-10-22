/********************************************************************************
** Form generated from reading UI file 'cgpsterminal.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QWidget *tbModule;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *m_pbListScriptModule;
    QListWidget *m_lwListScriptModule;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_lblTextCountFiles;
    QLineEdit *m_leCountFiles;
    QSpacerItem *verticalSpacer;
    QPushButton *m_pbReadScripts;
    QPlainTextEdit *m_teTerminal;
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
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_tbControlPanel->sizePolicy().hasHeightForWidth());
        m_tbControlPanel->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
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
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        groupBox_2->setFont(font3);

        verticalLayout->addWidget(groupBox_2);

        m_tbControlPanel->addTab(tbGeneral, QString());
        tbModule = new QWidget();
        tbModule->setObjectName(QStringLiteral("tbModule"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tbModule->sizePolicy().hasHeightForWidth());
        tbModule->setSizePolicy(sizePolicy3);
        groupBox = new QGroupBox(tbModule);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 211, 258));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_pbListScriptModule = new QPushButton(groupBox);
        m_pbListScriptModule->setObjectName(QStringLiteral("m_pbListScriptModule"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(m_pbListScriptModule->sizePolicy().hasHeightForWidth());
        m_pbListScriptModule->setSizePolicy(sizePolicy5);
        m_pbListScriptModule->setFont(font1);

        verticalLayout_2->addWidget(m_pbListScriptModule);

        m_lwListScriptModule = new QListWidget(groupBox);
        m_lwListScriptModule->setObjectName(QStringLiteral("m_lwListScriptModule"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(m_lwListScriptModule->sizePolicy().hasHeightForWidth());
        m_lwListScriptModule->setSizePolicy(sizePolicy6);
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setBold(false);
        font4.setWeight(50);
        m_lwListScriptModule->setFont(font4);
        m_lwListScriptModule->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_2->addWidget(m_lwListScriptModule);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_lblTextCountFiles = new QLabel(groupBox);
        m_lblTextCountFiles->setObjectName(QStringLiteral("m_lblTextCountFiles"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(m_lblTextCountFiles->sizePolicy().hasHeightForWidth());
        m_lblTextCountFiles->setSizePolicy(sizePolicy7);

        horizontalLayout_2->addWidget(m_lblTextCountFiles);

        m_leCountFiles = new QLineEdit(groupBox);
        m_leCountFiles->setObjectName(QStringLiteral("m_leCountFiles"));
        sizePolicy5.setHeightForWidth(m_leCountFiles->sizePolicy().hasHeightForWidth());
        m_leCountFiles->setSizePolicy(sizePolicy5);
        m_leCountFiles->setMaxLength(50);
        m_leCountFiles->setAlignment(Qt::AlignCenter);
        m_leCountFiles->setReadOnly(true);

        horizontalLayout_2->addWidget(m_leCountFiles);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        m_pbReadScripts = new QPushButton(groupBox);
        m_pbReadScripts->setObjectName(QStringLiteral("m_pbReadScripts"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(m_pbReadScripts->sizePolicy().hasHeightForWidth());
        m_pbReadScripts->setSizePolicy(sizePolicy8);
        QFont font5;
        font5.setPointSize(10);
        m_pbReadScripts->setFont(font5);
        m_pbReadScripts->setContextMenuPolicy(Qt::NoContextMenu);

        verticalLayout_2->addWidget(m_pbReadScripts);

        m_tbControlPanel->addTab(tbModule, QString());

        horizontalLayout->addWidget(m_tbControlPanel);

        m_teTerminal = new QPlainTextEdit(centralWidget);
        m_teTerminal->setObjectName(QStringLiteral("m_teTerminal"));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        m_teTerminal->setFont(font6);

        horizontalLayout->addWidget(m_teTerminal);

        CGPSTerminal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CGPSTerminal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 20));
        CGPSTerminal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CGPSTerminal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CGPSTerminal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CGPSTerminal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial Black"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        statusBar->setFont(font7);
        CGPSTerminal->setStatusBar(statusBar);

        retranslateUi(CGPSTerminal);

        m_tbControlPanel->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CGPSTerminal);
    } // setupUi

    void retranslateUi(QMainWindow *CGPSTerminal)
    {
        CGPSTerminal->setWindowTitle(QApplication::translate("CGPSTerminal", "GPSTerminal", 0));
        m_gbPort->setTitle(QApplication::translate("CGPSTerminal", "\320\237\320\276\321\200\321\202", 0));
        m_pbOpenPort->setText(QApplication::translate("CGPSTerminal", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        m_tbUpdateListPort->setText(QApplication::translate("CGPSTerminal", "R", 0));
        m_lblTextSpeed->setText(QApplication::translate("CGPSTerminal", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", 0));
        groupBox_2->setTitle(QApplication::translate("CGPSTerminal", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        m_tbControlPanel->setTabText(m_tbControlPanel->indexOf(tbGeneral), QApplication::translate("CGPSTerminal", "\320\236\320\261\321\211\320\270\320\265", 0));
        groupBox->setTitle(QApplication::translate("CGPSTerminal", "\320\234\320\276\320\264\321\203\320\273\321\214", 0));
        m_pbListScriptModule->setText(QApplication::translate("CGPSTerminal", "AT#LSCRIPT", 0));
        m_lblTextCountFiles->setText(QApplication::translate("CGPSTerminal", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        m_pbReadScripts->setText(QApplication::translate("CGPSTerminal", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273\321\213 \320\275\320\260 \320\237\320\232", 0));
        m_tbControlPanel->setTabText(m_tbControlPanel->indexOf(tbModule), QApplication::translate("CGPSTerminal", "\320\234\320\276\320\264\321\203\320\273\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class CGPSTerminal: public Ui_CGPSTerminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGPSTERMINAL_H
