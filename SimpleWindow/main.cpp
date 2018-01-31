#include <QtCore>
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {

    QString message = "Qt version: ";

    message.append(qVersion());

    QApplication app(argc, argv);

    QWidget window;

    window.resize(250, 150);
    window.setWindowTitle(message);
    window.show();

    return app.exec();
}