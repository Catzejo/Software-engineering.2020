#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ghosts.h"
#include "listghosts.h"
#include "readJson.h"
#include "open.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    open open;
    open.exec();

    ui->setupUi(this);

  try {
        QString linker = ":/son/kurs.json";
        readJson read(linker);
        ghostlist newList(read.getMap());
        list = newList.getList();
    } catch (const char* err) {
        QMessageBox::critical(this,"Error",err);
        exit(0);
    }
    ghost(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ghost(int page)
{
    QString strong = (list[page].strong()).join("<br>");
    QString enemy = hyperlinklist(list[page].enemy(),"<br>");
    QString week = (list[page].week()).join("<br>");
    QString food = (list[page].food()).join("<br>");
    ui->name->setText(list[page].name());
    ui->desc->setText(list[page].spec());
    ui->streng->setText(strong);
    ui->enem->setText(enemy);
    ui->week->setText(week);
    ui->food->setText(food);
    QPixmap pix(list[page].pic());
    int w = ui->pics->width();
    int h = ui->pics->height();
    ui->pics->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->pics->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_action_triggered()
{
    ghost(1);
}

void MainWindow::on_action_2_triggered()
{
    ghost(2);
}

void MainWindow::on_action_4_triggered()
{
    ghost(3);
}

void MainWindow::on_action_5_triggered()
{
    ghost(4);
}

void MainWindow::on_action_7_triggered()
{
    ghost(5);
}

void MainWindow::on_action_8_triggered()
{
    ghost(6);
}

void MainWindow::on_action_9_triggered()
{
    ghost(7);
}

QString MainWindow::hyperlink(int page, QString str)
{
    QString link = "";
        link += "<a href=\"" + QString::number(page) + "\" style=\"color: #9C0000;\">" + str + "</a>";
        return link;
}

QString MainWindow::hyperlinklist(QStringList inList, QString probel)
{
    QString newList = "";
    for (int i = 0; i < inList.size(); i++)
    {
        for (size_t j = 0; j < list.size(); j++)
        {
            if (list[j].name() == inList.at(i))
            {
                newList += hyperlink(j, inList.at(i));
                if (i != inList.size()-1)
                {
                    newList += probel;
                }
                break;
            }
        }
    }
    return newList;
}

void MainWindow::on_enem_linkActivated(const QString &link)
{
    ghost(link.toInt());
}

void MainWindow::on_pushButton_2_clicked()
{
    page++;
    ghost(page);
}

void MainWindow::on_pushButton_3_clicked()
{
    page--;
    ghost(page);
}
