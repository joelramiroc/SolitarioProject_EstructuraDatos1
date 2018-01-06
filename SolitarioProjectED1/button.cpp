#include "button.h"

Button::Button(QWidget *parent)://,string carta,, int numeroCarta):
    QPushButton(parent)
{
    this->carta=new Carta();
}

void Button::dragEnterEvent(QDragEnterEvent *event)
{

}

void Button::dragMoveEvent(QDragMoveEvent *event)
{

}

void Button::dropEvent(QDropEvent *event)
{

}

void Button::mousePressEvent(QMouseEvent *event)
{

}

void Button::mouseMoveEvent()
{
    QMouseEvent * e;
    x=e->x();
    y=e->y();

}

void Button::Presioonaar()
{
    QMouseEvent * e;
    x=e->x();
    y=e->y();
    setGeometry(QRect(QPoint(x,y),QSize(200, 50) ));
}

void Button::clickear()
{
    QString texto;
    string mostrar = carta->carta + ". Numero:" + to_string(carta->id);
    texto=mostrar.c_str();
    setText(texto);
}




