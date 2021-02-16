#ifndef CLASSES_H
#define CLASSES_H

#include <QString>
#include <QList>


class ghosts
{
public:
    ghosts();
    ghosts(QString nameC, QString specC, QString picC,
            QStringList enemyC, QStringList foodC, QStringList strongC,
            QStringList weekC);
    ghosts(const ghosts &v);

    ~ghosts();

    QString name();
    QString spec();
    QString pic();
    QStringList enemy();
    QStringList food();
    QStringList strong();
    QStringList week();

public:
    QString nameT = "";
    QString picT = "";
    QString specT = "";
    QStringList enemyT;
    QStringList foodT;
    QStringList strongT;
    QStringList weekT;

};

#endif // CLASSES_H
