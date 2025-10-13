#include "widget.h"

#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    helloButton = new QPushButton(QPushButton("&Hello 您好",this));
}

Widget::~Widget() {}
