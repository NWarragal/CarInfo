#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_brands_currentTextChanged(const QString &arg1);

    void on_models_currentTextChanged(const QString &arg1);

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
signals:
    void combobox1(const QString& str);
    void combobox2(const QString& str);
    void combobox3(const QString& str);
};

#endif // MAINWINDOW_H
