#include "QtOpenGLTriangle.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtOpenGLTriangle w;
	w.show();
	return a.exec();
}
