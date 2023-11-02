/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Calc_and_Plott;
    QLabel *label_error;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_close;
    QPushButton *pushButton_0;
    QPushButton *pushButton_4;
    QPushButton *pushButton_graph;
    QPushButton *pushButton_del;
    QPushButton *pushButton_open;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sin;
    QLabel *label_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_9;
    QGroupBox *groupBox;
    QDoubleSpinBox *doubleSpinBox_xmax;
    QDoubleSpinBox *doubleSpinBox_xmin;
    QLabel *label_3;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_ymax;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_ymin;
    QLabel *label_2;
    QLabel *label_5;
    QSpinBox *spinBox_n;
    QPushButton *pushButton_equally;
    QCustomPlot *widget;
    QPushButton *pushButton_mul;
    QLabel *label_7;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_asin;
    QLineEdit *result_show;
    QPushButton *pushButton_log;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_3;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_x;
    QPushButton *pushButton_8;
    QPushButton *pushButton_del_char;
    QPushButton *pushButton_6;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_7;
    QPushButton *pushButton_div;
    QPushButton *pushButton_2;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_5;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_plus;
    QWidget *Credit_calc;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_8;
    QSpinBox *spinBox_time;
    QLabel *label_13;
    QComboBox *comboBox_time_type;
    QDoubleSpinBox *doubleSpinBox_sum;
    QPushButton *pushButton_kredit_res;
    QLabel *label_10;
    QGroupBox *groupBox_2;
    QLabel *label_res_total;
    QLabel *label_16;
    QLabel *label_res_mon;
    QLabel *label_15;
    QLabel *label_res_proz;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_proz;
    QComboBox *comboBox_type_pay;
    QLabel *label_12;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1164, 404);
        QFont font;
        font.setFamilies({QString::fromUtf8("ITF Devanagari")});
        font.setUnderline(true);
        font.setKerning(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 212, 214);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 1131, 381));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 210, 212);"));
        Calc_and_Plott = new QWidget();
        Calc_and_Plott->setObjectName(QString::fromUtf8("Calc_and_Plott"));
        label_error = new QLabel(Calc_and_Plott);
        label_error->setObjectName(QString::fromUtf8("label_error"));
        label_error->setGeometry(QRect(20, -10, 361, 31));
        QFont font1;
        font1.setPointSize(20);
        label_error->setFont(font1);
        label_error->setStyleSheet(QString::fromUtf8("color: rgb(192, 0, 29);"));
        pushButton_ln = new QPushButton(Calc_and_Plott);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(120, 130, 41, 41));
        QFont font2;
        font2.setBold(true);
        pushButton_ln->setFont(font2);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_tan = new QPushButton(Calc_and_Plott);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(70, 230, 41, 41));
        pushButton_tan->setFont(font2);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_close = new QPushButton(Calc_and_Plott);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(20, 280, 41, 41));
        pushButton_close->setFont(font2);
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_0 = new QPushButton(Calc_and_Plott);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(190, 280, 41, 41));
        pushButton_0->setFont(font2);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_4 = new QPushButton(Calc_and_Plott);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 180, 41, 41));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_graph = new QPushButton(Calc_and_Plott);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        pushButton_graph->setGeometry(QRect(410, 280, 121, 41));
        pushButton_graph->setFont(font2);
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: rgb(242, 255, 242);\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(219, 231, 221);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_del = new QPushButton(Calc_and_Plott);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(340, 80, 41, 41));
        pushButton_del->setFont(font2);
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}\n"
""));
        pushButton_open = new QPushButton(Calc_and_Plott);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setGeometry(QRect(70, 280, 41, 41));
        pushButton_open->setFont(font2);
        pushButton_open->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_dot = new QPushButton(Calc_and_Plott);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(240, 280, 41, 41));
        pushButton_dot->setFont(font2);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_cos = new QPushButton(Calc_and_Plott);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(70, 180, 41, 41));
        pushButton_cos->setFont(font2);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_sin = new QPushButton(Calc_and_Plott);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(70, 130, 41, 41));
        pushButton_sin->setFont(font2);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        label_6 = new QLabel(Calc_and_Plott);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(410, 20, 91, 31));
        QFont font3;
        font3.setPointSize(24);
        font3.setBold(true);
        label_6->setFont(font3);
        pushButton_1 = new QPushButton(Calc_and_Plott);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(190, 230, 41, 41));
        pushButton_1->setFont(font2);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_9 = new QPushButton(Calc_and_Plott);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(290, 130, 41, 41));
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        groupBox = new QGroupBox(Calc_and_Plott);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(410, 60, 251, 211));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox_xmax = new QDoubleSpinBox(groupBox);
        doubleSpinBox_xmax->setObjectName(QString::fromUtf8("doubleSpinBox_xmax"));
        doubleSpinBox_xmax->setGeometry(QRect(10, 90, 101, 41));
        doubleSpinBox_xmax->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"padding-bottom: 3px;\n"
""));
        doubleSpinBox_xmax->setMinimum(-1000000.000000000000000);
        doubleSpinBox_xmax->setMaximum(1000000.000000000000000);
        doubleSpinBox_xmax->setValue(10.000000000000000);
        doubleSpinBox_xmin = new QDoubleSpinBox(groupBox);
        doubleSpinBox_xmin->setObjectName(QString::fromUtf8("doubleSpinBox_xmin"));
        doubleSpinBox_xmin->setGeometry(QRect(10, 30, 101, 41));
        doubleSpinBox_xmin->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"padding-bottom: 3px;\n"
""));
        doubleSpinBox_xmin->setMinimum(-1000000.000000000000000);
        doubleSpinBox_xmin->setMaximum(1000000.000000000000000);
        doubleSpinBox_xmin->setValue(-10.000000000000000);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 58, 16));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        label_3->setFont(font4);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 51, 16));
        label->setFont(font4);
        doubleSpinBox_ymax = new QDoubleSpinBox(groupBox);
        doubleSpinBox_ymax->setObjectName(QString::fromUtf8("doubleSpinBox_ymax"));
        doubleSpinBox_ymax->setGeometry(QRect(130, 90, 101, 41));
        doubleSpinBox_ymax->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"padding-bottom: 3px;\n"
""));
        doubleSpinBox_ymax->setMinimum(-1000000.000000000000000);
        doubleSpinBox_ymax->setMaximum(1000000.000000000000000);
        doubleSpinBox_ymax->setValue(10.000000000000000);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 70, 58, 16));
        label_4->setFont(font4);
        doubleSpinBox_ymin = new QDoubleSpinBox(groupBox);
        doubleSpinBox_ymin->setObjectName(QString::fromUtf8("doubleSpinBox_ymin"));
        doubleSpinBox_ymin->setGeometry(QRect(130, 30, 101, 41));
        doubleSpinBox_ymin->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"padding-bottom: 3px;\n"
""));
        doubleSpinBox_ymin->setMinimum(-1000000.000000000000000);
        doubleSpinBox_ymin->setMaximum(1000000.000000000000000);
        doubleSpinBox_ymin->setValue(-10.000000000000000);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 10, 51, 16));
        label_2->setFont(font4);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 140, 151, 16));
        label_5->setFont(font4);
        spinBox_n = new QSpinBox(groupBox);
        spinBox_n->setObjectName(QString::fromUtf8("spinBox_n"));
        spinBox_n->setEnabled(true);
        spinBox_n->setGeometry(QRect(40, 161, 151, 41));
        spinBox_n->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"padding-bottom: 3px;"));
        spinBox_n->setMinimum(2);
        spinBox_n->setMaximum(250000);
        spinBox_n->setValue(50);
        pushButton_equally = new QPushButton(Calc_and_Plott);
        pushButton_equally->setObjectName(QString::fromUtf8("pushButton_equally"));
        pushButton_equally->setGeometry(QRect(290, 280, 41, 41));
        pushButton_equally->setFont(font2);
        pushButton_equally->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: rgb(242, 255, 242);\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(219, 231, 221);\n"
"	border-radius: 12px;\n"
"}"));
        widget = new QCustomPlot(Calc_and_Plott);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(690, 30, 411, 291));
        pushButton_mul = new QPushButton(Calc_and_Plott);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(340, 180, 41, 41));
        pushButton_mul->setFont(font2);
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        label_7 = new QLabel(Calc_and_Plott);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 90, 141, 31));
        label_7->setFont(font3);
        pushButton_sqrt = new QPushButton(Calc_and_Plott);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(120, 230, 41, 41));
        pushButton_sqrt->setFont(font2);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_asin = new QPushButton(Calc_and_Plott);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(20, 130, 41, 41));
        pushButton_asin->setFont(font2);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        result_show = new QLineEdit(Calc_and_Plott);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(20, 20, 361, 51));
        result_show->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border-bottom: 1px solid grey;\n"
"	background-color: white;\n"
"}"));
        pushButton_log = new QPushButton(Calc_and_Plott);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(120, 180, 41, 41));
        pushButton_log->setFont(font2);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_clear = new QPushButton(Calc_and_Plott);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(540, 280, 121, 41));
        pushButton_clear->setFont(font2);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_3 = new QPushButton(Calc_and_Plott);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 230, 41, 41));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_acos = new QPushButton(Calc_and_Plott);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(20, 180, 41, 41));
        pushButton_acos->setFont(font2);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_x = new QPushButton(Calc_and_Plott);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(190, 80, 41, 41));
        pushButton_x->setFont(font2);
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}\n"
""));
        pushButton_8 = new QPushButton(Calc_and_Plott);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(240, 130, 41, 41));
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_del_char = new QPushButton(Calc_and_Plott);
        pushButton_del_char->setObjectName(QString::fromUtf8("pushButton_del_char"));
        pushButton_del_char->setGeometry(QRect(290, 80, 41, 41));
        pushButton_del_char->setFont(font2);
        pushButton_del_char->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}\n"
""));
        pushButton_6 = new QPushButton(Calc_and_Plott);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(290, 180, 41, 41));
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_atan = new QPushButton(Calc_and_Plott);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(20, 230, 41, 41));
        pushButton_atan->setFont(font2);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_7 = new QPushButton(Calc_and_Plott);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(190, 130, 41, 41));
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_div = new QPushButton(Calc_and_Plott);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(340, 130, 41, 41));
        pushButton_div->setFont(font2);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_2 = new QPushButton(Calc_and_Plott);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 230, 41, 41));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_pow = new QPushButton(Calc_and_Plott);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(120, 280, 41, 41));
        pushButton_pow->setFont(font2);
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_5 = new QPushButton(Calc_and_Plott);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(240, 180, 41, 41));
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_mod = new QPushButton(Calc_and_Plott);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(240, 80, 41, 41));
        pushButton_mod->setFont(font2);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}\n"
""));
        pushButton_minus = new QPushButton(Calc_and_Plott);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(340, 230, 41, 41));
        pushButton_minus->setFont(font2);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        pushButton_plus = new QPushButton(Calc_and_Plott);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(340, 280, 41, 41));
        pushButton_plus->setFont(font2);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(233, 232, 234);\n"
"	border-radius: 12px;\n"
"}"));
        tabWidget->addTab(Calc_and_Plott, QString());
        Credit_calc = new QWidget();
        Credit_calc->setObjectName(QString::fromUtf8("Credit_calc"));
        label_9 = new QLabel(Credit_calc);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(200, 90, 171, 31));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(false);
        label_9->setFont(font5);
        label_11 = new QLabel(Credit_calc);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(200, 190, 171, 31));
        label_11->setFont(font5);
        label_8 = new QLabel(Credit_calc);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(200, 30, 291, 31));
        label_8->setFont(font3);
        spinBox_time = new QSpinBox(Credit_calc);
        spinBox_time->setObjectName(QString::fromUtf8("spinBox_time"));
        spinBox_time->setEnabled(true);
        spinBox_time->setGeometry(QRect(380, 140, 191, 41));
        spinBox_time->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"padding-bottom: 3px;"));
        spinBox_time->setMinimum(1);
        spinBox_time->setMaximum(600);
        spinBox_time->setValue(10);
        label_13 = new QLabel(Credit_calc);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(200, 260, 211, 31));
        label_13->setFont(font5);
        comboBox_time_type = new QComboBox(Credit_calc);
        comboBox_time_type->addItem(QString());
        comboBox_time_type->addItem(QString());
        comboBox_time_type->setObjectName(QString::fromUtf8("comboBox_time_type"));
        comboBox_time_type->setGeometry(QRect(590, 140, 101, 32));
        comboBox_time_type->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: black;\n"
"border: solid 1px white;"));
        doubleSpinBox_sum = new QDoubleSpinBox(Credit_calc);
        doubleSpinBox_sum->setObjectName(QString::fromUtf8("doubleSpinBox_sum"));
        doubleSpinBox_sum->setGeometry(QRect(380, 90, 191, 41));
        doubleSpinBox_sum->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"padding-bottom: 3px;\n"
""));
        doubleSpinBox_sum->setMinimum(1.000000000000000);
        doubleSpinBox_sum->setMaximum(999999999999999983222784.000000000000000);
        doubleSpinBox_sum->setSingleStep(1000.000000000000000);
        doubleSpinBox_sum->setValue(10000.000000000000000);
        pushButton_kredit_res = new QPushButton(Credit_calc);
        pushButton_kredit_res->setObjectName(QString::fromUtf8("pushButton_kredit_res"));
        pushButton_kredit_res->setGeometry(QRect(380, 300, 181, 41));
        pushButton_kredit_res->setFont(font2);
        pushButton_kredit_res->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	align-items: center;\n"
"	background-color: rgb(242, 255, 242);\n"
"	border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	align-items: center;\n"
"	background-color: rgb(219, 231, 221);\n"
"	border-radius: 12px;\n"
"}"));
        label_10 = new QLabel(Credit_calc);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(200, 140, 171, 31));
        label_10->setFont(font5);
        groupBox_2 = new QGroupBox(Credit_calc);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(710, 50, 261, 281));
        QFont font6;
        font6.setPointSize(18);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setUnderline(false);
        font6.setKerning(false);
        groupBox_2->setFont(font6);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 210, 212);"));
        label_res_total = new QLabel(groupBox_2);
        label_res_total->setObjectName(QString::fromUtf8("label_res_total"));
        label_res_total->setGeometry(QRect(30, 220, 201, 31));
        QFont font7;
        font7.setPointSize(18);
        font7.setBold(true);
        label_res_total->setFont(font7);
        label_res_total->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 210, 212);"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 120, 201, 31));
        label_16->setFont(font5);
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 210, 212);"));
        label_res_mon = new QLabel(groupBox_2);
        label_res_mon->setObjectName(QString::fromUtf8("label_res_mon"));
        label_res_mon->setGeometry(QRect(30, 80, 201, 31));
        label_res_mon->setFont(font7);
        label_res_mon->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 210, 212);"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 50, 201, 31));
        label_15->setFont(font5);
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 210, 212);"));
        label_res_proz = new QLabel(groupBox_2);
        label_res_proz->setObjectName(QString::fromUtf8("label_res_proz"));
        label_res_proz->setGeometry(QRect(30, 150, 201, 31));
        label_res_proz->setFont(font7);
        label_res_proz->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 210, 212);"));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 190, 201, 31));
        label_14->setFont(font5);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 210, 212);"));
        doubleSpinBox_proz = new QDoubleSpinBox(Credit_calc);
        doubleSpinBox_proz->setObjectName(QString::fromUtf8("doubleSpinBox_proz"));
        doubleSpinBox_proz->setGeometry(QRect(380, 190, 191, 41));
        doubleSpinBox_proz->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"padding-bottom: 3px;\n"
""));
        doubleSpinBox_proz->setMinimum(1.000000000000000);
        doubleSpinBox_proz->setMaximum(999.000000000000000);
        doubleSpinBox_proz->setValue(18.000000000000000);
        comboBox_type_pay = new QComboBox(Credit_calc);
        comboBox_type_pay->addItem(QString());
        comboBox_type_pay->addItem(QString());
        comboBox_type_pay->setObjectName(QString::fromUtf8("comboBox_type_pay"));
        comboBox_type_pay->setGeometry(QRect(380, 240, 191, 41));
        comboBox_type_pay->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: black;\n"
"border: solid 1px white;"));
        label_12 = new QLabel(Credit_calc);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(200, 240, 171, 31));
        label_12->setFont(font5);
        tabWidget->addTab(Credit_calc, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>kredit</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        tabWidget->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>kredit</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_error->setText(QString());
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tg", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("MainWindow", "FUNC GRAPH", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Plotting", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "X MAX", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X MIN", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Y MAX", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y MIN", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "N, number of points", nullptr));
        pushButton_equally->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_del_char->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Calc_and_Plott), QCoreApplication::translate("MainWindow", "Calc and Plotting", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260, \342\202\275", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260, %", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        comboBox_time_type->setItemText(0, QCoreApplication::translate("MainWindow", "\320\273\320\265\321\202", nullptr));
        comboBox_time_type->setItemText(1, QCoreApplication::translate("MainWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        pushButton_kredit_res->setText(QCoreApplication::translate("MainWindow", "\320\240\320\220\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\242\320\236\320\223", nullptr));
        label_res_total->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213, %", nullptr));
        label_res_mon->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266, \342\202\275", nullptr));
        label_res_proz->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\273\320\263 + \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213, \342\202\275", nullptr));
        comboBox_type_pay->setItemText(0, QCoreApplication::translate("MainWindow", "\320\260\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        comboBox_type_pay->setItemText(1, QCoreApplication::translate("MainWindow", "\320\264\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Credit_calc), QCoreApplication::translate("MainWindow", "Credit calc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
