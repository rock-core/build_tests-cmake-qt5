#include "Gui.h"

#include <QString>
#include <QMdiArea>

int main(int argc, char** argv)
{
    QApplication a(argc, argv);

    QString b = QString::fromLatin1("test");
 
    return a.exec();
}
