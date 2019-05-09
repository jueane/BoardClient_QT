#include "BoardClient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BoardClient w;
	w.show();
	return a.exec();
}
