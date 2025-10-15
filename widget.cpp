#include "widget.h"

#include <QPushButton>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    helloButton = new QPushButton("&Hello 您好");
    
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(helloButton);
    
    setLayout(layout);
}

Widget::~Widget() {}
