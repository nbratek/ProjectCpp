/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *pulse_frame;
    QFrame *blood_pressure_frame;
    QFrame *sugar_level_frame;
    QSpinBox *pulse_spinbox;
    QSpinBox *blood_pressure_spinbox;
    QSpinBox *sugar_level_spinbox;
    QPushButton *add_data;
    QPushButton *read_data;
    QPushButton *delete_data_button;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *gender_combobox;
    QPushButton *save_profile_button;
    QSpinBox *age_spinbox;
    QPushButton *load_profile_button;
    QLineEdit *name_lineedit;
    QPushButton *generateReportButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *openCalendarButton;
    QMenuBar *menubar;
    QMenu *menuHealth;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1202, 894);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pulse_frame = new QFrame(centralwidget);
        pulse_frame->setObjectName("pulse_frame");
        pulse_frame->setGeometry(QRect(-20, 80, 1221, 191));
        pulse_frame->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        pulse_frame->setFrameShape(QFrame::StyledPanel);
        pulse_frame->setFrameShadow(QFrame::Raised);
        blood_pressure_frame = new QFrame(centralwidget);
        blood_pressure_frame->setObjectName("blood_pressure_frame");
        blood_pressure_frame->setGeometry(QRect(0, 270, 1200, 191));
        blood_pressure_frame->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        blood_pressure_frame->setFrameShape(QFrame::StyledPanel);
        blood_pressure_frame->setFrameShadow(QFrame::Raised);
        sugar_level_frame = new QFrame(centralwidget);
        sugar_level_frame->setObjectName("sugar_level_frame");
        sugar_level_frame->setGeometry(QRect(0, 459, 1200, 201));
        sugar_level_frame->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        sugar_level_frame->setFrameShape(QFrame::StyledPanel);
        sugar_level_frame->setFrameShadow(QFrame::Raised);
        pulse_spinbox = new QSpinBox(centralwidget);
        pulse_spinbox->setObjectName("pulse_spinbox");
        pulse_spinbox->setGeometry(QRect(110, 40, 62, 31));
        pulse_spinbox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #f0f0f0; \n"
"    border: 1px solid #cccccc; \n"
"    border-radius: 5px; \n"
"    padding: 5px; \n"
"    min-width: 50px; \n"
"    color: #333333; \n"
"    font-size: 12px; \n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right; \n"
"    width: 16px; \n"
"    border-left: 1px solid #cccccc; \n"
"    border-bottom: 1px solid #cccccc; \n"
"    border-top-left-radius: 5px; \n"
"    background-color: #e0e0e0; \n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right; \n"
"    width: 16px; \n"
"    border-left: 1px solid #cccccc; \n"
"    border-top: 1px solid #cccccc; \n"
"    border-bottom-left-radius: 5px; \n"
"    background-color: #e0e0e0; \n"
"}\n"
"\n"
"QSpinBox::up-button:hover,\n"
"QSpinBox::down-button:hover {\n"
"    background-color: #d0d0d0; \n"
"}"));
        pulse_spinbox->setMaximum(300);
        pulse_spinbox->setValue(80);
        blood_pressure_spinbox = new QSpinBox(centralwidget);
        blood_pressure_spinbox->setObjectName("blood_pressure_spinbox");
        blood_pressure_spinbox->setGeometry(QRect(330, 40, 71, 31));
        blood_pressure_spinbox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #f0f0f0; \n"
"    border: 1px solid #cccccc; \n"
"    border-radius: 5px; \n"
"    padding: 5px; \n"
"    min-width: 50px; \n"
"    color: #333333; \n"
"    font-size: 12px; \n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right; \n"
"    width: 16px; \n"
"    border-left: 1px solid #cccccc; \n"
"    border-bottom: 1px solid #cccccc; \n"
"    border-top-left-radius: 5px; \n"
"    background-color: #e0e0e0; \n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right; \n"
"    width: 16px; \n"
"    border-left: 1px solid #cccccc; \n"
"    border-top: 1px solid #cccccc; \n"
"    border-bottom-left-radius: 5px; \n"
"    background-color: #e0e0e0; \n"
"}\n"
"\n"
"QSpinBox::up-button:hover,\n"
"QSpinBox::down-button:hover {\n"
"    background-color: #d0d0d0; \n"
"}"));
        blood_pressure_spinbox->setMinimum(40);
        blood_pressure_spinbox->setMaximum(200);
        blood_pressure_spinbox->setValue(100);
        sugar_level_spinbox = new QSpinBox(centralwidget);
        sugar_level_spinbox->setObjectName("sugar_level_spinbox");
        sugar_level_spinbox->setGeometry(QRect(530, 40, 71, 31));
        sugar_level_spinbox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #f0f0f0; \n"
"    border: 1px solid #cccccc; \n"
"    border-radius: 5px; \n"
"    padding: 5px; \n"
"    min-width: 50px; \n"
"    color: #333333; \n"
"    font-size: 12px; \n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right; \n"
"    width: 16px; \n"
"    border-left: 1px solid #cccccc; \n"
"    border-bottom: 1px solid #cccccc; \n"
"    border-top-left-radius: 5px; \n"
"    background-color: #e0e0e0; \n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right; \n"
"    width: 16px; \n"
"    border-left: 1px solid #cccccc; \n"
"    border-top: 1px solid #cccccc; \n"
"    border-bottom-left-radius: 5px; \n"
"    background-color: #e0e0e0; \n"
"}\n"
"\n"
"QSpinBox::up-button:hover,\n"
"QSpinBox::down-button:hover {\n"
"    background-color: #d0d0d0; \n"
"}"));
        sugar_level_spinbox->setMaximum(200);
        sugar_level_spinbox->setValue(90);
        add_data = new QPushButton(centralwidget);
        add_data->setObjectName("add_data");
        add_data->setGeometry(QRect(780, 30, 121, 41));
        add_data->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50; \n"
"    border: none; \n"
"    color: white; \n"
"    padding: 10px 24px; \n"
"    text-align: center; \n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px; \n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    border-radius: 8px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #327534;\n"
"}"));
        read_data = new QPushButton(centralwidget);
        read_data->setObjectName("read_data");
        read_data->setGeometry(QRect(910, 30, 131, 41));
        read_data->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0064cf; \n"
"    border: none; \n"
"    color: white; \n"
"    padding: 10px 24px; \n"
"    text-align: center; \n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px; \n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    border-radius: 8px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #00448c; \n"
"}"));
        delete_data_button = new QPushButton(centralwidget);
        delete_data_button->setObjectName("delete_data_button");
        delete_data_button->setGeometry(QRect(1060, 30, 131, 41));
        delete_data_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cf0000; \n"
"    border: none; \n"
"    color: white; \n"
"    padding: 10px 24px; \n"
"    text-align: center; \n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px; \n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    border-radius: 8px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #700101; \n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 41, 21));
        label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 40, 111, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(430, 40, 81, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        gender_combobox = new QComboBox(centralwidget);
        gender_combobox->addItem(QString());
        gender_combobox->addItem(QString());
        gender_combobox->setObjectName("gender_combobox");
        gender_combobox->setGeometry(QRect(280, 0, 71, 20));
        save_profile_button = new QPushButton(centralwidget);
        save_profile_button->setObjectName("save_profile_button");
        save_profile_button->setGeometry(QRect(640, 0, 101, 31));
        save_profile_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#7B1FA2; \n"
"    border: none; \n"
"    color: white; \n"
"    padding: 6px 12px;\n"
"    text-align: center; \n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 12px; \n"
"    margin: 2px 1px;  \n"
"    cursor: pointer;\n"
"    border-radius: 8px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #CC8400;\n"
"}\n"
""));
        age_spinbox = new QSpinBox(centralwidget);
        age_spinbox->setObjectName("age_spinbox");
        age_spinbox->setGeometry(QRect(410, 0, 71, 21));
        load_profile_button = new QPushButton(centralwidget);
        load_profile_button->setObjectName("load_profile_button");
        load_profile_button->setGeometry(QRect(750, 0, 101, 31));
        load_profile_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#7B1FA2; \n"
"    border: none; \n"
"    color: white; \n"
"    padding: 6px 12px;\n"
"    text-align: center; \n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 12px; \n"
"    margin: 2px 1px;  \n"
"    cursor: pointer;\n"
"    border-radius: 8px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #CC8400;\n"
"}\n"
""));
        name_lineedit = new QLineEdit(centralwidget);
        name_lineedit->setObjectName("name_lineedit");
        name_lineedit->setGeometry(QRect(60, 0, 101, 31));
        generateReportButton = new QPushButton(centralwidget);
        generateReportButton->setObjectName("generateReportButton");
        generateReportButton->setGeometry(QRect(500, 0, 121, 31));
        generateReportButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#7B1FA2; \n"
"    border: none; \n"
"    color: white; \n"
"    padding: 6px 12px;\n"
"    text-align: center; \n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 12px; \n"
"    margin: 2px 1px;  \n"
"    cursor: pointer;\n"
"    border-radius: 8px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #CC8400;\n"
"}\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 41, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 0, 71, 21));
        label_5->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 0, 41, 21));
        label_6->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        openCalendarButton = new QPushButton(centralwidget);
        openCalendarButton->setObjectName("openCalendarButton");
        openCalendarButton->setGeometry(QRect(880, 0, 121, 31));
        openCalendarButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#7B1FA2; \n"
"    border: none; \n"
"    color: white; \n"
"    padding: 6px 12px;\n"
"    text-align: center; \n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 12px; \n"
"    margin: 2px 1px;  \n"
"    cursor: pointer;\n"
"    border-radius: 8px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #CC8400;\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1202, 22));
        menuHealth = new QMenu(menubar);
        menuHealth->setObjectName("menuHealth");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHealth->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        add_data->setText(QCoreApplication::translate("MainWindow", "Add Data", nullptr));
        read_data->setText(QCoreApplication::translate("MainWindow", "Read Data", nullptr));
        delete_data_button->setText(QCoreApplication::translate("MainWindow", "Delete Data", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Pulse:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Blood Pressure:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sugar Level:", nullptr));
        gender_combobox->setItemText(0, QCoreApplication::translate("MainWindow", "Female", nullptr));
        gender_combobox->setItemText(1, QCoreApplication::translate("MainWindow", "Male", nullptr));

        save_profile_button->setText(QCoreApplication::translate("MainWindow", "Save Profile", nullptr));
        load_profile_button->setText(QCoreApplication::translate("MainWindow", "Load Profile", nullptr));
        name_lineedit->setText(QString());
        generateReportButton->setText(QCoreApplication::translate("MainWindow", "Generate Report", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Gender:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Age:", nullptr));
        openCalendarButton->setText(QCoreApplication::translate("MainWindow", "Open Calendar", nullptr));
        menuHealth->setTitle(QCoreApplication::translate("MainWindow", "health", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
