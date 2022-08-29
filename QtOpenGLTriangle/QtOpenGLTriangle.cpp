
#include "QtOpenGLTriangle.h"

QtOpenGLTriangle::QtOpenGLTriangle(QWidget* parent)
    : QGLWidget(parent)
{
    ui.setupUi(this);
}
void QtOpenGLTriangle::initializeGL()
{
    //����widget������ͳߴ�
    setGeometry(300, 150, 500, 500);
    //�������ʱ��ɫ
    glClearColor(0.0, 0.0, 0.0, 0);
}
void QtOpenGLTriangle::resizeGL(int w, int h)
{
    //�ӿڱ任
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    //ͶӰ�任
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40.0, (GLdouble)w / (GLdouble)h, 0.1, 10000.0);
    //��ͼ�任
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 15.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}
void QtOpenGLTriangle::paintGL()
{
    //����
    glClear(GL_COLOR_BUFFER_BIT);
    //�����߲�������
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

