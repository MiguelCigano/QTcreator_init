#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , serial(new QSerialPort(this)) // Inicializa el objeto serial
{
    ui->setupUi(this);

    /* Configuración del puerto serial */
    serial->setPortName("COM3");  // Cambia esto al puerto correcto
    serial->setBaudRate(QSerialPort::Baud115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    /* Intentar abrir el puerto */
    if (serial->open(QIODevice::WriteOnly)) {
        qDebug() << "Puerto serial abierto correctamente.";
    } else {
        qDebug() << "Error al abrir el puerto serial:" << serial->errorString();
    }

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
}

MainWindow::~MainWindow()
{
    if (serial->isOpen()) {
        serial->close();
    }
    delete ui;
}

void MainWindow::onButtonClicked()
{
    QByteArray command = "ON";  // Comando que se enviará
    serial->write(command);     // Enviar comando por serial
    qDebug() << "Button pressed: LED ON";
}
