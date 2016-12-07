#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QVector>

class Plotter : public QWidget{
  Q_OBJECT
private:
 // float ampl, freq;
  float teta;
  float velocidade;
  double MAX,MIN;
  QVector<double> xGrafico;
  QVector<double> yGrafico;

public:
  explicit Plotter(QWidget *parent = 0);

  void paintEvent(QPaintEvent *e);
  void mouseMoveEvent(QMouseEvent *e);
  void recebedados(QVector <double> x, QVector <double> y);
  void normalizacao();
signals:
  void posx(int);
  void posy(int);

public slots:
 // void setAmplitude(int ampl);
 // void setFrequencia(int freq);
 // void timerEvent(QTimerEvent *e);
 // void setVelocidade(int velocidade);
};

#endif // PLOTTER_H
