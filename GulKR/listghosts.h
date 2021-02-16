#ifndef LISTOF_H
#define LISTOF_H

#include <vector>
#include <ghosts.h>
#include <QDebug>

using namespace std;

class ghostlist
{
public:
    ghostlist();
    ghostlist(QVariantMap json_map);
    ghostlist(const ghostlist &base);

   vector<ghosts> getList();

private:
   vector <ghosts> list;
   int page;

};

#endif // LISTOF_H
