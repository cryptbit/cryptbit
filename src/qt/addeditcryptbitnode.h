#ifndef ADDEDITADRENALINENODE_H
#define ADDEDITADRENALINENODE_H

#include <QDialog>

namespace Ui {
class AddEditCryptbitNode;
}


class AddEditCryptbitNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditCryptbitNode(QWidget *parent = 0);
    ~AddEditCryptbitNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditCryptbitNode *ui;
};

#endif // ADDEDITADRENALINENODE_H
