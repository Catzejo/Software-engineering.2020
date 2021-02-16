#include "open.h"
#include "ui_open.h"

open::open(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::open)
{
    ui->setupUi(this);

    QPixmap pic(":/pics/ru.png");
    pic = pic.scaled(this->size(), Qt::IgnoreAspectRatio);
    ui->label->setPixmap(pic);
}

open::~open()
{
    delete ui;
}

void open::on_pushButton_clicked()
{
    this->close();
}
