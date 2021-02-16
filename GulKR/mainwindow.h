#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QIcon>
#include <ghosts.h>
#include <vector>


using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void ghost(int param);

    void on_action_triggered();
    void on_action_2_triggered();
    void on_action_4_triggered();
    void on_action_5_triggered();
    void on_action_7_triggered();
    void on_action_8_triggered();
    void on_action_9_triggered();
    QString hyperlink(int page, QString str);
    QString hyperlinklist(QStringList inList, QString probel);


    void on_enem_linkActivated(const QString &link);


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    int page;
    QString linker,param;
    vector<ghosts> list;
};
#endif // MAINWINDOW_H
