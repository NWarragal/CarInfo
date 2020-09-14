/********************************************************************************
** Form generated from reading UI file 'addnew.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEW_H
#define UI_ADDNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNew
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_15;
    QLineEdit *brand;
    QLabel *label_16;
    QLineEdit *model;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_9;
    QLabel *label;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_12;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_14;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_15;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QLineEdit *modification;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *country;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *type_body;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *engine;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *capacity;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *locate_cyl;
    QSpacerItem *verticalSpacer_8;
    QLineEdit *power;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_17;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_18;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_19;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_20;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_21;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_22;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_23;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *torque;
    QSpacerItem *verticalSpacer_16;
    QLineEdit *length;
    QSpacerItem *verticalSpacer_24;
    QLineEdit *width;
    QSpacerItem *verticalSpacer_25;
    QLineEdit *heigth;
    QSpacerItem *verticalSpacer_26;
    QLineEdit *wheelbase;
    QSpacerItem *verticalSpacer_27;
    QLineEdit *dynamic;
    QSpacerItem *verticalSpacer_28;
    QLineEdit *fuel_consump;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddNew)
    {
        if (AddNew->objectName().isEmpty())
            AddNew->setObjectName(QStringLiteral("AddNew"));
        AddNew->resize(700, 600);
        AddNew->setMinimumSize(QSize(700, 600));
        AddNew->setMaximumSize(QSize(700, 600));
        layoutWidget = new QWidget(AddNew);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 661, 551));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout->addWidget(label_15);

        brand = new QLineEdit(layoutWidget);
        brand->setObjectName(QStringLiteral("brand"));

        horizontalLayout->addWidget(brand);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout->addWidget(label_16);

        model = new QLineEdit(layoutWidget);
        model->setObjectName(QStringLiteral("model"));

        horizontalLayout->addWidget(model);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_11);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_12);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_13);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_14);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_15);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        modification = new QLineEdit(layoutWidget);
        modification->setObjectName(QStringLiteral("modification"));

        verticalLayout_3->addWidget(modification);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        country = new QLineEdit(layoutWidget);
        country->setObjectName(QStringLiteral("country"));

        verticalLayout_3->addWidget(country);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        type_body = new QLineEdit(layoutWidget);
        type_body->setObjectName(QStringLiteral("type_body"));

        verticalLayout_3->addWidget(type_body);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        engine = new QLineEdit(layoutWidget);
        engine->setObjectName(QStringLiteral("engine"));

        verticalLayout_3->addWidget(engine);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        capacity = new QLineEdit(layoutWidget);
        capacity->setObjectName(QStringLiteral("capacity"));

        verticalLayout_3->addWidget(capacity);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);

        locate_cyl = new QLineEdit(layoutWidget);
        locate_cyl->setObjectName(QStringLiteral("locate_cyl"));

        verticalLayout_3->addWidget(locate_cyl);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        power = new QLineEdit(layoutWidget);
        power->setObjectName(QStringLiteral("power"));

        verticalLayout_3->addWidget(power);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_17);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_2->addWidget(label_10);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_18);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_19);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_2->addWidget(label_14);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_20);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_2->addWidget(label_12);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_21);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_2->addWidget(label_11);

        verticalSpacer_22 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_22);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_2->addWidget(label_13);

        verticalSpacer_23 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_23);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        torque = new QLineEdit(layoutWidget);
        torque->setObjectName(QStringLiteral("torque"));

        verticalLayout_4->addWidget(torque);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_16);

        length = new QLineEdit(layoutWidget);
        length->setObjectName(QStringLiteral("length"));

        verticalLayout_4->addWidget(length);

        verticalSpacer_24 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_24);

        width = new QLineEdit(layoutWidget);
        width->setObjectName(QStringLiteral("width"));

        verticalLayout_4->addWidget(width);

        verticalSpacer_25 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_25);

        heigth = new QLineEdit(layoutWidget);
        heigth->setObjectName(QStringLiteral("heigth"));

        verticalLayout_4->addWidget(heigth);

        verticalSpacer_26 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_26);

        wheelbase = new QLineEdit(layoutWidget);
        wheelbase->setObjectName(QStringLiteral("wheelbase"));

        verticalLayout_4->addWidget(wheelbase);

        verticalSpacer_27 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_27);

        dynamic = new QLineEdit(layoutWidget);
        dynamic->setObjectName(QStringLiteral("dynamic"));

        verticalLayout_4->addWidget(dynamic);

        verticalSpacer_28 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_28);

        fuel_consump = new QLineEdit(layoutWidget);
        fuel_consump->setObjectName(QStringLiteral("fuel_consump"));

        verticalLayout_4->addWidget(fuel_consump);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_5);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout_6->addWidget(buttonBox);


        retranslateUi(AddNew);

        QMetaObject::connectSlotsByName(AddNew);
    } // setupUi

    void retranslateUi(QDialog *AddNew)
    {
        AddNew->setWindowTitle(QApplication::translate("AddNew", "Enter new car; ATTENTION!!! NO SPACES!!!", Q_NULLPTR));
        label_15->setText(QApplication::translate("AddNew", "Brand", Q_NULLPTR));
        label_16->setText(QApplication::translate("AddNew", "Model", Q_NULLPTR));
        label->setText(QApplication::translate("AddNew", "Modification", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddNew", "Country", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddNew", "Type of body", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddNew", "Type of engine", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddNew", "Capacity", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddNew", "Cylinder location", Q_NULLPTR));
        label_7->setText(QApplication::translate("AddNew", "Power", Q_NULLPTR));
        label_10->setText(QApplication::translate("AddNew", "Torque", Q_NULLPTR));
        label_9->setText(QApplication::translate("AddNew", "Length of car", Q_NULLPTR));
        label_14->setText(QApplication::translate("AddNew", "Width of car", Q_NULLPTR));
        label_12->setText(QApplication::translate("AddNew", "Height of car", Q_NULLPTR));
        label_11->setText(QApplication::translate("AddNew", "Wheel base", Q_NULLPTR));
        label_13->setText(QApplication::translate("AddNew", "Acseleration to 60mph", Q_NULLPTR));
        label_8->setText(QApplication::translate("AddNew", "Fuel consumption", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNew: public Ui_AddNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEW_H
