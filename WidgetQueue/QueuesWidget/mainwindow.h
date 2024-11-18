#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

struct Node{
    std::string name;
    std::string requestService;
    Node *next;
};

struct Bank {
    int queueLong;
    Node *first;
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void add_client();
    void show_all_clients();

private:
    Ui::MainWindow  *ui;
    QLineEdit       *nameLineEdit;
    QLineEdit       *serviceLineEdit;
    QPushButton     *addClientButton;
    QPushButton     *showClientsButton;
    QTextEdit       *clientTextEdit;
    Bank            *queue;
};
#endif // MAINWINDOW_H
