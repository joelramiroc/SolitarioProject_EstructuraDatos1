#ifndef BUTTON_H
#define BUTTON_H
#include<QWidget>
#include<QPushButton>
#include<QMouseEvent>
#include<iostream>
#include<QMessageBox>
#include<QString>
#include <cstring>
#include"carta.h"
#include <QMouseEvent>

using namespace std;

using namespace std;

class Button : public QPushButton
{
    Q_OBJECT
public:
    Carta* carta;
    Button(QWidget *parent = nullptr);
    int x,y;

protected:
    void dragEnterEvent(QDragEnterEvent *event) Q_DECL_OVERRIDE;
    void dragMoveEvent(QDragMoveEvent *event) Q_DECL_OVERRIDE;
    void dropEvent(QDropEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

public slots:
    void Presioonaar();
    void mouseMoveEvent();
    void clickear();
};

#endif // BUTTON_H
