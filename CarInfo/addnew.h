#ifndef ADDNEW_H
#define ADDNEW_H

#include <QDialog>

namespace Ui {
class AddNew;
}

class AddNew : public QDialog
{
    Q_OBJECT

public:
    explicit AddNew(QWidget *parent = 0);
    ~AddNew();

private:
    Ui::AddNew *ui;
private slots:
    void saveClicked();
};

#endif // ADDNEW_H
