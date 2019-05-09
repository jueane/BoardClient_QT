#include "BoardClient.h"
#include <qdebug>

using namespace std;

BoardClient::BoardClient(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.pushButton->setText("hi");


	QObject::connect(ui.pushButton, &QPushButton::clicked, [&] {
		qDebug("hi");
	});

	//ui.pushButton->mouse
	//ui.pushButton->addAction(new QAction(){

		//});
}
