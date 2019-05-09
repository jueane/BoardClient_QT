#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BoardClient.h"

class BoardClient : public QMainWindow
{
	Q_OBJECT

public:
	BoardClient(QWidget *parent = Q_NULLPTR);

private:
	Ui::BoardClientClass ui;
};
