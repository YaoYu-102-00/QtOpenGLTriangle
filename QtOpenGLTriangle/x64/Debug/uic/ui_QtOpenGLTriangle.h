/********************************************************************************
** Form generated from reading UI file 'QtOpenGLTriangle.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOPENGLTRIANGLE_H
#define UI_QTOPENGLTRIANGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtOpenGLTriangleClass
{
public:

    void setupUi(QWidget *QtOpenGLTriangleClass)
    {
        if (QtOpenGLTriangleClass->objectName().isEmpty())
            QtOpenGLTriangleClass->setObjectName(QString::fromUtf8("QtOpenGLTriangleClass"));
        QtOpenGLTriangleClass->resize(600, 400);

        retranslateUi(QtOpenGLTriangleClass);

        QMetaObject::connectSlotsByName(QtOpenGLTriangleClass);
    } // setupUi

    void retranslateUi(QWidget *QtOpenGLTriangleClass)
    {
        QtOpenGLTriangleClass->setWindowTitle(QCoreApplication::translate("QtOpenGLTriangleClass", "QtOpenGLTriangle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtOpenGLTriangleClass: public Ui_QtOpenGLTriangleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOPENGLTRIANGLE_H
