#ifndef ADRENALINENODECONFIGDIALOG_H
#define ADRENALINENODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class CryptbitNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class CryptbitNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CryptbitNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "YOURIPADDRESS:REPLACEMEWITHYOURPORT", QString privkey="MASTERNODEPRIVKEY");
    ~CryptbitNodeConfigDialog();

private:
    Ui::CryptbitNodeConfigDialog *ui;
};

#endif // ADRENALINENODECONFIGDIALOG_H
