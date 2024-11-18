#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    queue = nullptr;

    // Conecta botones con las funciones correspondientes
    connect(ui->addClientButton, &QPushButton::clicked, this, &MainWindow::add_client);
    connect(ui->showClientsButton, &QPushButton::clicked, this, &MainWindow::show_all_clients);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add_client() {
    std::string name = ui->nameLineEdit->text().toStdString();
    std::string service = ui->serviceLineEdit->text().toStdString();

    if (queue == nullptr) {
        queue = new Bank;
        queue->first = new Node;
        queue->first->name = name;
        queue->first->requestService = service;
        queue->first->next = nullptr;
        queue->queueLong = 1;
    } else {
        Node *auxNode = queue->first;
        while (auxNode->next != nullptr) {
            auxNode = auxNode->next;
        }
        auxNode->next = new Node;
        auxNode->next->name = name;
        auxNode->next->requestService = service;
        auxNode->next->next = nullptr;
        queue->queueLong++;
    }

    // Limpiar los campos después de agregar
    ui->nameLineEdit->clear();
    ui->serviceLineEdit->clear();
}

void MainWindow::show_all_clients() {

    if (queue == nullptr) {
        ui->clientsTextEdit->setText("Queue is empty");
        return;
    }

    Node *auxNode = queue->first;
    QString displayText = "Clients on queue\n";
    while (auxNode != nullptr) {
        displayText += "-----------------------\n";
        displayText += QString::fromStdString("Name: " + auxNode->name + "\n");
        displayText += QString::fromStdString("Service: " + auxNode->requestService + "\n");
        displayText += "-----------------------\n";
        auxNode = auxNode->next;
    }

    ui->clientsTextEdit->setText(displayText);
}
