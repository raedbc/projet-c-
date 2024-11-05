#ifndef CLIENTUI_H
#define CLIENTUI_H

#include "client.h"

#include <QDialog>

namespace Ui {
class ClientUI;
}

class ClientUI : public QDialog
{
    Q_OBJECT

public:
    explicit ClientUI(QWidget *parent = nullptr);
    ~ClientUI();

protected:
    void showEvent(QShowEvent *event) override;

private slots:

    void on_pushButton_edit_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_del_clicked();

private:
    Ui::ClientUI *ui;
    client c;
};

#endif // CLIENTUI_H
