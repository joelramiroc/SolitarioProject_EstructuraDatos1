#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPushButton>
#include <QMainWindow>
#include <QString>
#include<QWidget>
#include <QMouseEvent>
#include<QPoint>
#include<iostream>
#include<QMouseEvent>
#include<QEvent>
#include<vector>
#include<time.h>
#include"carta.h"
#include"button.h"
#include<QPainter>
#include <QFrame>
#include<QLabel>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Carta * maso1[13];
    Carta * maso2[13];
    Carta * maso3[13];
    Carta * maso4[13];
    Button* buttonCartas[52];

    vector<Carta * > masoOculto;
    vector<Carta * > lista1;
    vector<Carta * > lista2;
    vector<Carta * > lista3;
    vector<Carta * > lista4;
    vector<Carta * > lista5;
    vector<Carta * > lista6;
    vector<Carta * > lista7;
    int x=50,y=50;    

private slots:
        void clicked(  );
    void testered();
    void iinicialit();
    int random();
    int randomMaso();
    void assigntoList(vector<Carta*>* asign);
    void assigntoOculto(vector<Carta*>* asign);
    void addToListas();
    void createButtons(vector<Carta * >* lista, int *contara);
    void mouseDoubleClickEvent(QMouseEvent *e) override;
    void mouseReleaseEvent(QMouseEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;
    void mouseMoveEvent(QMouseEvent *e) override;
    //void paintEvent(QPaintEvent *event);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
