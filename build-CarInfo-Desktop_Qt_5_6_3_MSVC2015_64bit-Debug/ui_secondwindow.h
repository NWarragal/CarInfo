/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_17;
    QLabel *brand;
    QLabel *label_15;
    QLabel *model;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *modification;
    QLabel *country;
    QLabel *type_body;
    QLabel *engine;
    QLabel *capacity;
    QLabel *locate_cyl;
    QLabel *power;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *torque;
    QLabel *length;
    QLabel *width;
    QLabel *heigth;
    QLabel *wheelbase;
    QLabel *dynamic;
    QLabel *fuel_consumpt;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(700, 600);
        SecondWindow->setMinimumSize(QSize(700, 600));
        SecondWindow->setMaximumSize(QSize(700, 600));
        layoutWidget = new QWidget(SecondWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 661, 541));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout->addWidget(label_17);

        brand = new QLabel(layoutWidget);
        brand->setObjectName(QStringLiteral("brand"));

        horizontalLayout->addWidget(brand);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout->addWidget(label_15);

        model = new QLabel(layoutWidget);
        model->setObjectName(QStringLiteral("model"));

        horizontalLayout->addWidget(model);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        modification = new QLabel(layoutWidget);
        modification->setObjectName(QStringLiteral("modification"));

        verticalLayout_3->addWidget(modification);

        country = new QLabel(layoutWidget);
        country->setObjectName(QStringLiteral("country"));

        verticalLayout_3->addWidget(country);

        type_body = new QLabel(layoutWidget);
        type_body->setObjectName(QStringLiteral("type_body"));

        verticalLayout_3->addWidget(type_body);

        engine = new QLabel(layoutWidget);
        engine->setObjectName(QStringLiteral("engine"));

        verticalLayout_3->addWidget(engine);

        capacity = new QLabel(layoutWidget);
        capacity->setObjectName(QStringLiteral("capacity"));

        verticalLayout_3->addWidget(capacity);

        locate_cyl = new QLabel(layoutWidget);
        locate_cyl->setObjectName(QStringLiteral("locate_cyl"));

        verticalLayout_3->addWidget(locate_cyl);

        power = new QLabel(layoutWidget);
        power->setObjectName(QStringLiteral("power"));

        verticalLayout_3->addWidget(power);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_2->addWidget(label_10);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_2->addWidget(label_14);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_2->addWidget(label_12);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_2->addWidget(label_11);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_2->addWidget(label_13);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        torque = new QLabel(layoutWidget);
        torque->setObjectName(QStringLiteral("torque"));

        verticalLayout_4->addWidget(torque);

        length = new QLabel(layoutWidget);
        length->setObjectName(QStringLiteral("length"));

        verticalLayout_4->addWidget(length);

        width = new QLabel(layoutWidget);
        width->setObjectName(QStringLiteral("width"));

        verticalLayout_4->addWidget(width);

        heigth = new QLabel(layoutWidget);
        heigth->setObjectName(QStringLiteral("heigth"));

        verticalLayout_4->addWidget(heigth);

        wheelbase = new QLabel(layoutWidget);
        wheelbase->setObjectName(QStringLiteral("wheelbase"));

        verticalLayout_4->addWidget(wheelbase);

        dynamic = new QLabel(layoutWidget);
        dynamic->setObjectName(QStringLiteral("dynamic"));

        verticalLayout_4->addWidget(dynamic);

        fuel_consumpt = new QLabel(layoutWidget);
        fuel_consumpt->setObjectName(QStringLiteral("fuel_consumpt"));

        verticalLayout_4->addWidget(fuel_consumpt);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);


        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "Information about car", Q_NULLPTR));
        label_17->setText(QApplication::translate("SecondWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">Brand</span></p></body></html>", Q_NULLPTR));
        brand->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        label_15->setText(QApplication::translate("SecondWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">Model</span></p></body></html>", Q_NULLPTR));
        model->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("SecondWindow", "Modification", Q_NULLPTR));
        label_2->setText(QApplication::translate("SecondWindow", "Country", Q_NULLPTR));
        label_3->setText(QApplication::translate("SecondWindow", "Type of body", Q_NULLPTR));
        label_4->setText(QApplication::translate("SecondWindow", "Type of engine", Q_NULLPTR));
        label_5->setText(QApplication::translate("SecondWindow", "Capacity", Q_NULLPTR));
        label_6->setText(QApplication::translate("SecondWindow", "Cylinder location", Q_NULLPTR));
        label_7->setText(QApplication::translate("SecondWindow", "Power", Q_NULLPTR));
        modification->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        country->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        type_body->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        engine->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        capacity->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        locate_cyl->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        power->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("SecondWindow", "Torque", Q_NULLPTR));
        label_9->setText(QApplication::translate("SecondWindow", "Length of car", Q_NULLPTR));
        label_14->setText(QApplication::translate("SecondWindow", "Width of car", Q_NULLPTR));
        label_12->setText(QApplication::translate("SecondWindow", "Height of car", Q_NULLPTR));
        label_11->setText(QApplication::translate("SecondWindow", "Wheel base", Q_NULLPTR));
        label_13->setText(QApplication::translate("SecondWindow", "Acseleration to 60mph", Q_NULLPTR));
        label_8->setText(QApplication::translate("SecondWindow", "Fuel consumption", Q_NULLPTR));
        torque->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        length->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        width->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        heigth->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        wheelbase->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        dynamic->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
        fuel_consumpt->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-style:italic;\">N/A</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
