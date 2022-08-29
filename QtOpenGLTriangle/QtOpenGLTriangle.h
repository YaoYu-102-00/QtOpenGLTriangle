
#pragma once
#ifndef  WIDGET_H
#define WIDGET_H


#include <QtWidgets/QWidget>
#include "ui_QtOpenGLTriangle.h"
#include<QtOpenGL/qgl.h>
#include<gl/GL.h>
#include<gl/GLU.h>

class QtOpenGLTriangle : public QGLWidget
{
	Q_OBJECT

public:
	QtOpenGLTriangle(QWidget* parent = Q_NULLPTR);

private:
	Ui::QtOpenGLTriangleClass ui;
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();
};
#endif //  WIDGET_H