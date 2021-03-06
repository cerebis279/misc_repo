#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
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
    void on_btnOne_clicked();

    void on_btnTwo_clicked();

    void on_btnThree_clicked();

    void on_btnFour_clicked();

    void on_btnFive_clicked();

    void on_btnSix_clicked();

    void on_btnSeven_clicked();

    void on_btnEight_clicked();

    void on_btnNine_clicked();

    void on_btnZero_clicked();

    void on_btnDot_clicked();

    void on_btnLeftPar_clicked();

    void on_btnRightPar_clicked();

    void on_btnPow_clicked();

    void on_btnDivide_clicked();

    void on_btnMultiply_clicked();

    void on_btnMinus_clicked();

    void on_btnPlus_clicked();

    void on_btnEval_clicked();

    void on_listDisplay_currentRowChanged(int currentRow);

private:
    Ui::MainWindow *ui;
protected:
    QListWidgetItem *text; // User input before it is put into the history
    QListWidgetItem *equation; //The finalized equation
    QList<QString> items; //How it gets printed pretty much
};

#endif // MAINWINDOW_H
