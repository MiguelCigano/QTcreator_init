#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); // objeto "a" de la clase "QCoreApplication"
    qDebug() << "Hola QT";
    QString nombre = "Miguel Martinez";
    qDebug() << nombre;
    return a.exec(); // para mantener la aplicación abierta
}
