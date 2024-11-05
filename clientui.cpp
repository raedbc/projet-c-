#include "clientui.h"
#include "ui_clientui.h"

#include <QMessageBox>

ClientUI::ClientUI(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClientUI)
{
    ui->setupUi(this);
}

ClientUI::~ClientUI()
{
    delete ui;
}

void ClientUI::showEvent(QShowEvent *event)
{
    QDialog::showEvent(event);
    ui->tableView->setModel(c.afficher());
}

void ClientUI::on_pushButton_add_clicked()
{
    int id = ui->id->text().toInt();
    QString prenom = ui->prenom->text();
    QString nom = ui->nom->text();
    QString sexe = ui->sexe->text();
    QDate DateN = ui->DateN->date();
    QString nationalite = ui->nationalite->text();
    QString email = ui->email->text();

    client c(id,nom,prenom,sexe,DateN,nationalite,email);
    bool test;
    test = c.Ajouter();
    if(test==true){
        ui->tableView->setModel(c.afficher());
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Error !!"),
                              QObject::tr(""
                                          "Can not add client."), QMessageBox::Cancel);
    }
}

void ClientUI::on_pushButton_edit_clicked()
{
    int id = ui->id->text().toInt();
    QString prenom = ui->prenom->text();
    QString nom = ui->nom->text();
    QString sexe = ui->sexe->text();
    QDate DateN = ui->DateN->date();
    QString nationalite = ui->nationalite->text();
    QString email = ui->email->text();

    client c(id,nom,prenom,sexe,DateN,nationalite,email);
    bool test;
    test = c.modifier();
    if(test==true){
        ui->tableView->setModel(c.afficher());
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Error !!"),
                              QObject::tr(""
                                          "Can not edit client."), QMessageBox::Cancel);
    }
}

void ClientUI::on_pushButton_del_clicked()
{
    client c1;
    c1.setId(ui->del_line->text().toInt());
    c1.Supprime(c1.getId());
    ui->tableView->setModel(c.afficher());
}

