
#include "QtOpenGLTriangle.h"

QtOpenGLTriangle::QtOpenGLTriangle(QWidget* parent)
    : QGLWidget(parent)
{
    ui.setupUi(this);
}
void QtOpenGLTriangle::initializeGL()
{
    //设置widget的坐标和尺寸
    setGeometry(300, 150, 500, 500);
    //设置清除时颜色
    glClearColor(0.0, 0.0, 0.0, 0);
}
void QtOpenGLTriangle::resizeGL(int w, int h)
{
    //视口变换
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    //投影变换
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40.0, (GLdouble)w / (GLdouble)h, 0.1, 10000.0);
    //视图变换
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 15.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}
void QtOpenGLTriangle::paintGL()
{
    //清屏
    glClear(GL_COLOR_BUFFER_BIT);
    //绘制七彩三角形
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-2, 0, 0);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(2, 0, 0);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0, 4, 0);
    glEnd();
    glFlush();
}

