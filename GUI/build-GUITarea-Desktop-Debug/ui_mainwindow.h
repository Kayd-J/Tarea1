/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *ejecutar;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nodoInicio;
    QLineEdit *nodoFinal;
    QLabel *resultado;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ejecutar = new QPushButton(centralWidget);
        ejecutar->setObjectName(QStringLiteral("ejecutar"));
        ejecutar->setGeometry(QRect(10, 140, 90, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 58, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 60, 58, 16));
        nodoInicio = new QLineEdit(centralWidget);
        nodoInicio->setObjectName(QStringLiteral("nodoInicio"));
        nodoInicio->setGeometry(QRect(10, 90, 51, 28));
        nodoFinal = new QLineEdit(centralWidget);
        nodoFinal->setObjectName(QStringLiteral("nodoFinal"));
        nodoFinal->setGeometry(QRect(90, 90, 51, 28));
        resultado = new QLabel(centralWidget);
        resultado->setObjectName(QStringLiteral("resultado"));
        resultado->setGeometry(QRect(200, 20, 171, 261));
        resultado->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Dijkstra", Q_NULLPTR));
        ejecutar->setText(QApplication::translate("MainWindow", "Ejecutar", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Salida", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Legada", Q_NULLPTR));
        resultado->setText(QApplication::translate("MainWindow", "Recorrido:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
