/********************************************************************************
** Form generated from reading UI file 'rpcconsole.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPCCONSOLE_H
#define UI_RPCCONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_info;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *openTorLogfileButton;
    QPushButton *showCLOptionsButton;
    QLabel *label_15;
    QLabel *label_11;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *protocol_version;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_17;
    QLabel *totalBlocks;
    QSpacerItem *horizontalSpacer_6;
    QLabel *startupTime;
    QLabel *lbl_PROTOCOL_VERSION;
    QLabel *label_14;
    QLabel *label_18;
    QLabel *label_3;
    QCheckBox *isTestNet;
    QLabel *numberOfBlocks;
    QLabel *numberOfConnections;
    QLabel *openSSLVersion;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *clientName;
    QLabel *label_7;
    QLabel *buildDate;
    QLabel *clientVersion;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *labelTorLogo;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lastBlockTime;
    QPushButton *openDebugLogfileButton;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_14;
    QCheckBox *isTorProxy;
    QSpacerItem *horizontalSpacer_5;
    QLabel *min_protocol_version;
    QWidget *tab_console;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *clearButton;

    void setupUi(QDialog *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName(QStringLiteral("RPCConsole"));
        RPCConsole->resize(740, 596);
        RPCConsole->setStyleSheet(QLatin1String("QPushButton, QToolButton {\n"
"        border: 2px solid #000000;\n"
"        border-radius: 3px;\n"
"        background-color: #000000;\n"
"        color: white;\n"
"        padding: 3px;\n"
"        margin: 3px;\n"
"}\n"
"\n"
"QPushButton:checked, QToolButton:checked {\n"
"        color: #AEC6CF;\n"
"}\n"
"\n"
"QPushButton:pressed, QToolButton:pressed {\n"
"        border-color: #AEC6CF;\n"
"        color: #AEC6CF;\n"
"}\n"
"\n"
"QPushButton:disabled, QToolButton:disabled {\n"
"        color: #444;\n"
"        background-color: #222222;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(RPCConsole);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(RPCConsole);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_info = new QWidget();
        tab_info->setObjectName(QStringLiteral("tab_info"));
        gridLayout = new QGridLayout(tab_info);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 15, 3, 1, 1);

        openTorLogfileButton = new QPushButton(tab_info);
        openTorLogfileButton->setObjectName(QStringLiteral("openTorLogfileButton"));

        gridLayout->addWidget(openTorLogfileButton, 18, 0, 1, 1);

        showCLOptionsButton = new QPushButton(tab_info);
        showCLOptionsButton->setObjectName(QStringLiteral("showCLOptionsButton"));
        showCLOptionsButton->setAutoDefault(false);

        gridLayout->addWidget(showCLOptionsButton, 20, 0, 1, 1);

        label_15 = new QLabel(tab_info);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setIndent(5);

        gridLayout->addWidget(label_15, 15, 0, 1, 1);

        label_11 = new QLabel(tab_info);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 21, 0, 1, 1);

        label_5 = new QLabel(tab_info);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMargin(0);
        label_5->setIndent(5);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_2 = new QLabel(tab_info);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setIndent(5);

        gridLayout->addWidget(label_2, 13, 0, 1, 1);

        label_13 = new QLabel(tab_info);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setIndent(5);

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        label_10 = new QLabel(tab_info);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label_10->setFont(font1);

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        protocol_version = new QLabel(tab_info);
        protocol_version->setObjectName(QStringLiteral("protocol_version"));

        gridLayout->addWidget(protocol_version, 14, 2, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_18, 20, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_17, 14, 3, 1, 1);

        totalBlocks = new QLabel(tab_info);
        totalBlocks->setObjectName(QStringLiteral("totalBlocks"));
        totalBlocks->setCursor(QCursor(Qt::IBeamCursor));
        totalBlocks->setTextFormat(Qt::PlainText);
        totalBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(totalBlocks, 12, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 6, 3, 1, 1);

        startupTime = new QLabel(tab_info);
        startupTime->setObjectName(QStringLiteral("startupTime"));
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(startupTime, 5, 2, 1, 1);

        lbl_PROTOCOL_VERSION = new QLabel(tab_info);
        lbl_PROTOCOL_VERSION->setObjectName(QStringLiteral("lbl_PROTOCOL_VERSION"));
        lbl_PROTOCOL_VERSION->setIndent(5);

        gridLayout->addWidget(lbl_PROTOCOL_VERSION, 14, 0, 1, 1);

        label_14 = new QLabel(tab_info);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setIndent(5);

        gridLayout->addWidget(label_14, 3, 0, 1, 1);

        label_18 = new QLabel(tab_info);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setIndent(5);

        gridLayout->addWidget(label_18, 9, 0, 1, 1);

        label_3 = new QLabel(tab_info);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setIndent(5);

        gridLayout->addWidget(label_3, 11, 0, 1, 1);

        isTestNet = new QCheckBox(tab_info);
        isTestNet->setObjectName(QStringLiteral("isTestNet"));
        isTestNet->setEnabled(false);
        isTestNet->setMinimumSize(QSize(338, 0));

        gridLayout->addWidget(isTestNet, 8, 2, 1, 1);

        numberOfBlocks = new QLabel(tab_info);
        numberOfBlocks->setObjectName(QStringLiteral("numberOfBlocks"));
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfBlocks, 11, 2, 1, 1);

        numberOfConnections = new QLabel(tab_info);
        numberOfConnections->setObjectName(QStringLiteral("numberOfConnections"));
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfConnections, 7, 2, 1, 1);

        openSSLVersion = new QLabel(tab_info);
        openSSLVersion->setObjectName(QStringLiteral("openSSLVersion"));
        openSSLVersion->setCursor(QCursor(Qt::IBeamCursor));
        openSSLVersion->setTextFormat(Qt::PlainText);
        openSSLVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(openSSLVersion, 3, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 11, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 8, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 9, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 3, 1, 1);

        label_8 = new QLabel(tab_info);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setIndent(5);

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        label_9 = new QLabel(tab_info);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        clientName = new QLabel(tab_info);
        clientName->setObjectName(QStringLiteral("clientName"));
        clientName->setCursor(QCursor(Qt::IBeamCursor));
        clientName->setTextFormat(Qt::PlainText);
        clientName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientName, 1, 2, 1, 1);

        label_7 = new QLabel(tab_info);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setIndent(5);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        buildDate = new QLabel(tab_info);
        buildDate->setObjectName(QStringLiteral("buildDate"));
        buildDate->setCursor(QCursor(Qt::IBeamCursor));
        buildDate->setTextFormat(Qt::PlainText);
        buildDate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(buildDate, 4, 2, 1, 1);

        clientVersion = new QLabel(tab_info);
        clientVersion->setObjectName(QStringLiteral("clientVersion"));
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientVersion, 2, 2, 1, 1);

        label_4 = new QLabel(tab_info);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setIndent(5);

        gridLayout->addWidget(label_4, 12, 0, 1, 1);

        label_12 = new QLabel(tab_info);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setIndent(5);

        gridLayout->addWidget(label_12, 4, 0, 1, 1);

        labelTorLogo = new QLabel(tab_info);
        labelTorLogo->setObjectName(QStringLiteral("labelTorLogo"));
        labelTorLogo->setEnabled(false);
        labelTorLogo->setMaximumSize(QSize(50, 50));
        labelTorLogo->setPixmap(QPixmap(QString::fromUtf8(":/images/tor_logo")));
        labelTorLogo->setScaledContents(true);

        gridLayout->addWidget(labelTorLogo, 2, 4, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 16, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 7, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 10, 3, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 17, 3, 1, 1);

        label_6 = new QLabel(tab_info);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setIndent(5);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        lastBlockTime = new QLabel(tab_info);
        lastBlockTime->setObjectName(QStringLiteral("lastBlockTime"));
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockTime, 13, 2, 1, 1);

        openDebugLogfileButton = new QPushButton(tab_info);
        openDebugLogfileButton->setObjectName(QStringLiteral("openDebugLogfileButton"));
        openDebugLogfileButton->setAutoDefault(false);

        gridLayout->addWidget(openDebugLogfileButton, 17, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 13, 3, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 12, 3, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 18, 3, 1, 1);

        isTorProxy = new QCheckBox(tab_info);
        isTorProxy->setObjectName(QStringLiteral("isTorProxy"));
        isTorProxy->setEnabled(false);

        gridLayout->addWidget(isTorProxy, 9, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 5, 3, 1, 1);

        min_protocol_version = new QLabel(tab_info);
        min_protocol_version->setObjectName(QStringLiteral("min_protocol_version"));

        gridLayout->addWidget(min_protocol_version, 15, 2, 1, 1);

        tabWidget->addTab(tab_info, QString());
        tab_console = new QWidget();
        tab_console->setObjectName(QStringLiteral("tab_console"));
        verticalLayout_3 = new QVBoxLayout(tab_console);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        messagesWidget = new QTextEdit(tab_console);
        messagesWidget->setObjectName(QStringLiteral("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tab_console);
        label->setObjectName(QStringLiteral("label"));
        label->setText(QStringLiteral(">"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(tab_console);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        clearButton = new QPushButton(tab_console);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon);
        clearButton->setShortcut(QStringLiteral("Ctrl+L"));
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab_console, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(RPCConsole);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QDialog *RPCConsole)
    {
        RPCConsole->setWindowTitle(QApplication::translate("RPCConsole", "CypertsCoin - Debug window", 0));
        openTorLogfileButton->setText(QApplication::translate("RPCConsole", "Open Tor log", 0));
#ifndef QT_NO_TOOLTIP
        showCLOptionsButton->setToolTip(QApplication::translate("RPCConsole", "Show the CypertsCoin-Qt help message to get a list with possible CypertsCoin command-line options.", 0));
#endif // QT_NO_TOOLTIP
        showCLOptionsButton->setText(QApplication::translate("RPCConsole", "&Show Commands", 0));
        label_15->setText(QApplication::translate("RPCConsole", "Min Protocol version", 0));
        label_11->setText(QApplication::translate("RPCConsole", "<html><head/><body><p><span style=\" font-weight:600; font-style:italic; text-decoration: underline;\">Network</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("RPCConsole", "Client name", 0));
        label_2->setText(QApplication::translate("RPCConsole", "Last block time", 0));
        label_13->setText(QApplication::translate("RPCConsole", "Startup time", 0));
        label_10->setText(QApplication::translate("RPCConsole", "<html><head/><body><p><span style=\" font-weight:600; font-style:italic; text-decoration: underline;\">Block chain information</span></p></body></html>", 0));
        protocol_version->setText(QApplication::translate("RPCConsole", "N/A", 0));
        totalBlocks->setText(QApplication::translate("RPCConsole", "N/A", 0));
        startupTime->setText(QApplication::translate("RPCConsole", "N/A", 0));
        lbl_PROTOCOL_VERSION->setText(QApplication::translate("RPCConsole", "Client Protocol version", 0));
        label_14->setText(QApplication::translate("RPCConsole", "Using OpenSSL version", 0));
        label_18->setText(QApplication::translate("RPCConsole", "Connection type", 0));
        label_3->setText(QApplication::translate("RPCConsole", "Current number of blocks", 0));
        isTestNet->setText(QString());
        numberOfBlocks->setText(QApplication::translate("RPCConsole", "N/A", 0));
        numberOfConnections->setText(QApplication::translate("RPCConsole", "N/A", 0));
        openSSLVersion->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_8->setText(QApplication::translate("RPCConsole", "On testnet", 0));
        label_9->setText(QApplication::translate("RPCConsole", "<html><head/><body><p><span style=\" font-weight:600; font-style:italic; text-decoration: underline;\">Client details</span></p></body></html>", 0));
        clientName->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_7->setText(QApplication::translate("RPCConsole", "Number of connections", 0));
        buildDate->setText(QApplication::translate("RPCConsole", "N/A", 0));
        clientVersion->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_4->setText(QApplication::translate("RPCConsole", "Estimated total blocks", 0));
        label_12->setText(QApplication::translate("RPCConsole", "Build date", 0));
        labelTorLogo->setText(QString());
        label_6->setText(QApplication::translate("RPCConsole", "Client version", 0));
        lastBlockTime->setText(QApplication::translate("RPCConsole", "N/A", 0));
#ifndef QT_NO_TOOLTIP
        openDebugLogfileButton->setToolTip(QApplication::translate("RPCConsole", "Open the CypertsCoin debug log file from the current data directory. This can take a few seconds for large log files.", 0));
#endif // QT_NO_TOOLTIP
        openDebugLogfileButton->setText(QApplication::translate("RPCConsole", "&Open debug log", 0));
        isTorProxy->setText(QApplication::translate("RPCConsole", "Standard peer conncetivity", 0));
        min_protocol_version->setText(QApplication::translate("RPCConsole", "N/A", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_info), QApplication::translate("RPCConsole", "&Information", 0));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("RPCConsole", "Clear console", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_console), QApplication::translate("RPCConsole", "&Console", 0));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPCCONSOLE_H
