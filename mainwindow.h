#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void startHandler();
    void exitHandler();
    void scoreHandler();

private:
    QPushButton *startButton;
    QPushButton *exitButton;
    QPushButton *scoreboard;

};

#endif // MAINWINDOW_Hs
