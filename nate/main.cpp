#include <QtGui>
#include <common/database.hpp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QMainWindow w;
	w.setCentralWidget(new QLabel(QObject::tr("Sup"), &w));
	w.show();
    return a.exec();
}
