#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QPalette>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //    this->setWindowFlags(Qt::Window|Qt::MSWindowsFixedSizeDialogHint|Qt::WindowMinimizeButtonHint);
    ui->setupUi(this);
    iinicialit();
    int contara=0;

    createButtons(&lista1,&contara);
    createButtons(&lista2,&contara);
    createButtons(&lista3,&contara);
    createButtons(&lista4,&contara);
    createButtons(&lista5,&contara);
    createButtons(&lista6,&contara);
    createButtons(&lista7,&contara);
    createButtons(&masoOculto,&contara);

    addToListas();

    QPixmap pixmap("C:/Users/DELL 5040 I7/Documents/SolitarioProjectED1/baraja.png");
    QIcon ButtonIcon(pixmap);
    //ui->pushButton->setIcon(ButtonIcon);
    QLabel *boatIcon = new QLabel(this);
    boatIcon->setPixmap(QPixmap("C:/Users/DELL 5040 I7/Documents/SolitarioProjectED1/baraja.jpg"));
    boatIcon->move(10, 10);
    boatIcon->show();
    boatIcon->setAttribute(Qt::WA_DeleteOnClose);
}



void MainWindow::addToListas()
{

    for (int i = 0; i<52; i++){
        if(i<1)
        {
            ui->lista1->addWidget(buttonCartas[i]);
        }else if(i<3)
        {
            ui->lista2->addWidget(buttonCartas[i]);
        }else if(i<6)
        {
            ui->lista3->addWidget(buttonCartas[i]);
        }else if(i<10)
        {
            ui->lista4->addWidget(buttonCartas[i]);
        }else if(i<15)
        {
            ui->lista5->addWidget(buttonCartas[i]);
        }else if(i<21)
        {
            ui->lista6->addWidget(buttonCartas[i]);
        }else if(i<28)
        {
            ui->lista7->addWidget(buttonCartas[i]);
        }else if(i<35)
        {
            ui->masoOculto->addWidget(buttonCartas[i]);
        }
    }
}

void MainWindow::createButtons(vector<Carta * >* lista,int *contara)
{
    for( auto item : (*lista) )
    {
        Button* b = new Button();
        b->carta=item;
        buttonCartas[(*contara)]=b;
        (*contara)=(*contara)+1;
        //connect(b,SIGNAL(clicked()),b, SLOT(clickear()));
        connect(b,SIGNAL(pressed()),b, SLOT(Presioonaar()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clicked( )
{
buttonCartas[5]->setText("prob");
}

void MainWindow::testered()
{

}

/*
void MainWindow::paintEvent(QPaintEvent *event)
{
    QRectF target(0,0,700,700); // Coordenadas de donde kieres imagen x,y,ancho,alto
    QImage image("C:/Users/DELL 5040 I7/Documents/SolitarioProjectED1/baraja.jpg"); // Ubicacion de la imagen
    QPainter painter(this);
    painter.drawImage(target, image);
    painter.restore();
}
*/

void MainWindow::iinicialit()
{
    for(int i = 0; i < 13; i++)
    {
        Carta* c1  =new Carta();
        c1->id = i;
        c1->tipo=1;
        c1->carta="Diamantes";
        this->maso1[i]=c1;
        Carta* c2  =new Carta();
        c2->id = i;
        c2->tipo=2;
        c2->carta="Corazones";
        this->maso2[i]=c2;
        Carta* c3  =new Carta();
        c3->id = i;
        c3->tipo=3;
        c3->carta="Picas";
        this->maso3[i]=c3;
        Carta* c4  =new Carta();
        c4->id = i;
        c4->tipo=4;
        c4->carta="Trebol";
        this->maso4[i]=c4;
    }

    assigntoList(&lista1);
    while(lista2.size()<2)
    {
        assigntoList(&lista2);
    }
    while(lista3.size()<3)
    {
        assigntoList(&lista3);
    }

    while(lista4.size()<4)
    {
        assigntoList(&lista4);
    }


    while(lista5.size()<5)
    {
        assigntoList(&lista5);
    }

    while(lista6.size()<6)
    {
        assigntoList(&lista6);
    }


    while(lista7.size()<7)
    {
        assigntoList(&lista7);
    }

    assigntoOculto(&masoOculto);

}

int MainWindow::random()
{
    srand(time(NULL));
    int num=1+rand()%(14-1);
    return num;
}
int MainWindow::randomMaso()
{
    srand(time(NULL));
    int num=1+rand()%(5-1);
    return num;
}

void MainWindow::assigntoList(vector<Carta*>* asign)
{

        int maso=randomMaso();
        int val = random()-1;
        if(maso==1)
        {
            if (maso1[val]->disponible==true)
            {
                asign->push_back(maso1[val]);
                maso1[val]->disponible=false;
            }
        }else if(maso==2)
        {
            if (maso2[val]->disponible==true)
            {
                asign->push_back(maso2[val]);
                maso2[val]->disponible=false;
            }
        }else if(maso==3)
        {
            if (maso3[val]->disponible==true)
            {
                asign->push_back(maso3[val]);
                maso3[val]->disponible=false;
            }
        }else if(maso==4)
        {
            if (maso4[val]->disponible==true)
            {
                asign->push_back(maso4[val]);
                maso4[val]->disponible=false;
            }
        }
}

void MainWindow::assigntoOculto(vector<Carta *> *asign)
{
     for(int i = 0; i < 13 ; i++)
     {
         if(maso1[i]->disponible==true)
         {
             asign->push_back(maso1[i]);
             maso1[i]->disponible=false;
         }
         if(maso2[i]->disponible==true)
         {
             asign->push_back(maso2[i]);
             maso2[i]->disponible=false;
         }
         if(maso3[i]->disponible==true)
         {
             asign->push_back(maso3[i]);
             maso3[i]->disponible=false;
         }
         if(maso4[i]->disponible==true)
         {
             asign->push_back(maso4[i]);
             maso4[i]->disponible=false;
         }
     }
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{

    this->x = e->x();
    this->y = e->y();
    QWidget::mousePressEvent(e);
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    this->x = e->x();
    this->y = e->y();
    QWidget::mouseMoveEvent(e);
}


void MainWindow::mouseDoubleClickEvent(QMouseEvent *e)
{
    this->x = e->x();
    this->y = e->y();
    QWidget::mouseDoubleClickEvent(e);
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    this->x = e->x();
    this->y = e->y();
    QWidget::mouseReleaseEvent(e);
}


