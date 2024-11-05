#ifndef CLIENT_H
#define CLIENT_H

#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>
#include <QDate>

class client
{
private :
    int id;
    QString nom,prenom,sexe,nationalite,email;
    QDate date_n;
public:
    client();
    client(int,QString,QString,QString,QDate,QString,QString);

    // Getters
    int getId();
    QString getNom();
    QString getPrenom();
    QString getSexe();
    QDate getDateN();
    QString getNationalite();
    QString getEmail();

    // Setters
    void setId(int id);
    void setNom(QString nom);
    void setPrenom(QString prenom);
    void setSexe(QString sexe);
    void setDateN(QDate dateN);
    void setNationalite(QString nationalite);
    void setEmail(QString email);


    //CRUD
    bool Ajouter();
    QSqlQueryModel* afficher();
    bool Supprime(int);
    bool modifier();
    bool reset();
};

#endif // CLIENT_H
