#include "client.h"

client::client() {
    id = 0;
    nom = "";
    prenom = "";
    sexe = "";
    date_n = QDate();
    nationalite = "";
    email = "";
}

client::client(int Id,QString Nom,QString Prenom,QString Sexe,QDate DateN,QString Nationalite,QString Email)
{
    id = Id;
    nom = Nom;
    prenom = Prenom;
    sexe = Sexe;
    date_n = DateN;
    nationalite = Nationalite;
    email = Email;
}

// Getters
int client::getId() {
    return id;
}

QString client::getNom() {
    return nom;
}

QString client::getPrenom() {
    return prenom;
}

QString client::getSexe() {
    return sexe;
}

QDate client::getDateN() {
    return date_n;
}

QString client::getNationalite() {
    return nationalite;
}

QString client::getEmail() {
    return email;
}

// Setters
void client::setId(int id) {
    this->id = id;
}

void client::setNom(QString nom) {
    this->nom = nom;
}

void client::setPrenom(QString prenom) {
    this->prenom = prenom;
}

void client::setSexe(QString sexe) {
    this->sexe = sexe;
}

void client::setDateN(QDate dateN) {
    this->date_n = dateN;
}

void client::setNationalite(QString nationalite) {
    this->nationalite = nationalite;
}

void client::setEmail(QString email) {
    this->email = email;
}

// CRUD
// Create :

bool client::Ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO client (id, nom, prenom, sexe, date_n, nationalite, email) "
                  "VALUES (:id, :nom, :prenom, :sexe, :date_n, :nationalite, :email)");

    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":sexe", sexe);
    query.bindValue(":date_n", date_n);
    query.bindValue(":nationalite", nationalite);
    query.bindValue(":email", email);

    return query.exec();
}

// Afficher

QSqlQueryModel *client::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    model->setQuery("SELECT id, nom, prenom, sexe, TO_CHAR(date_n, 'DD-MM-YYYY') AS date_n, "
                    "nationalite, email FROM client");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Sexe"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date de Naissance"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Nationalité"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Email"));

    return model;
}

//Modifier

bool client::modifier()
{
    QSqlQuery query;

    query.prepare("UPDATE client SET nom = :nom, prenom = :prenom, sexe = :sexe, "
                  "date_n = :date_n, nationalite = :nationalite, email = :email "
                  "WHERE id = :id");

    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":sexe", sexe);
    query.bindValue(":date_n", date_n);
    query.bindValue(":nationalite", nationalite);
    query.bindValue(":email", email);

    return query.exec();
}

//supprimer

bool client::Supprime(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM client WHERE id = :id");
    query.bindValue(":id", id);
    return query.exec();
}

//Reset
bool client::reset()
{
    QSqlQuery query;
    query.prepare("delete client");
    return query.exec();
}

