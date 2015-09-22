#include "cryptbitnodeconfigdialog.h"
#include "ui_cryptbitnodeconfigdialog.h"

#include <QModelIndex>

CryptbitNodeConfigDialog::CryptbitNodeConfigDialog(QWidget *parent, QString nodeAddress, QString privkey) :
    QDialog(parent),
    ui(new Ui::CryptbitNodeConfigDialog)
{
    ui->setupUi(this);
    QString desc = "rpcallowip=127.0.0.1<br>rpcuser=REPLACEME<br>rpcpassword=REPLACEME<br>server=1<br>listen=1<br>port=REPLACEMEWITHYOURPORT<br>staking=0<br>enableaccounts=1<br>masternode=1<br>masternodeaddr=" + nodeAddress + "<br>masternodeprivkey=" + privkey + "<br>";
    ui->detailText->setHtml(desc);
}

CryptbitNodeConfigDialog::~CryptbitNodeConfigDialog()
{
    delete ui;
}
