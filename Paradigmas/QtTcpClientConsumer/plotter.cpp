#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <cmath>
#include <QMouseEvent>


Plotter::Plotter(QWidget *parent) : QWidget(parent){
  //freq = 1;
 // ampl = 1.0;
  velocidade = 0.0;
  teta = 0.0;
  startTimer(100);
  setMouseTracking(true); // habilita o rastreio do mouse
}

void Plotter::recebedados(QVector <double> x, QVector <double> y){ //Recebe os dados da outra classe
    xGrafico = x;
    yGrafico = y;
    normalizacao();
    repaint();
}
void Plotter::normalizacao(){ // pega os valores máximos e mínimos dos vetores
    int tam_inicial = yGrafico.size();
    MIN = yGrafico[0];
    MAX = yGrafico[0];
    for(int i=1; i<tam_inicial;i++){
        if(yGrafico[i]>MAX){
            MAX =yGrafico[i];
        }
        if(yGrafico[i]<MIN){
            MIN =yGrafico[i];
        }
    }
}

void Plotter::paintEvent(QPaintEvent *e){
  QPainter painter(this);
  QBrush brush;
  QPen pen;


  // habilita o anti-aliasing para que as
  // linhas sejam desenhadas sem serrilhados
  painter.setRenderHint(QPainter::Antialiasing);

  // define as props do preenchimento
  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);

  // define as props da caneta
  pen.setColor(QColor(255,0,0));
  pen.setWidth(2);

  // comunica as mudancas ao objeto painter
  painter.setBrush(brush);
  painter.setPen(pen);

  // desenha um retangulo
  painter.drawRect(0,0,width(), height());

  // atualiza as propriedades da caneta
  pen.setColor(QColor(0,0,0));
  pen.setWidth(2);
  // atualiza a caneta e desenha o eixo
  // horizontal
  painter.setPen(pen);
  painter.drawLine(0,
                   height()/2,
                   width(),
                   height()/2);


  // atualiza as propriedades da caneta
  pen.setColor(QColor(0,0,255));
  pen.setWidth(1);
  // atualiza a caneta e desenha o eixo
  // horizontal
  painter.setPen(pen);


  // primeiro ponto
  int tam_inicial=0;
  int tam_final  = xGrafico.size();
  if(tam_final>=30){
    tam_inicial = tam_final-30;
  }
  double kyi,kyf;
  double kxi,kxf;
  qDebug() << "inic " << tam_inicial;
  for(int i=tam_inicial; i<tam_final-1; i++){
      qDebug() << "inic " << tam_inicial << yGrafico[tam_inicial];
    //Normalizacao da posicao y
    kyi =   (yGrafico[i] - MIN)/(MAX-MIN);
    kyf = (yGrafico[i+1] - MIN)/(MAX-MIN);
    //Normalizacao da posicao x
    kxi =   (xGrafico[i] - xGrafico[tam_inicial])/(xGrafico[tam_final-1] - xGrafico[tam_inicial]);
    kxf =   (xGrafico[i+1] - xGrafico[tam_inicial])/(xGrafico[tam_final-1] - xGrafico[tam_inicial]);
   // qDebug() << xGrafico[i] << ": " << kyi
  //  qDebug() << kxi << ": " << kyi ;
   // qDebug() << kxf << ": " << kyf ;
    painter.drawLine(kxi*width(),kyi*height(), kxf*width(),kyf*height());

  }

}

void Plotter::mouseMoveEvent(QMouseEvent *e){
  emit posx(e->x());
  emit posy(e->y());
}
