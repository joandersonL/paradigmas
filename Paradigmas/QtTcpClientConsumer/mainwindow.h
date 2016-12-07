#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <vector>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
  void tcpConnect();
public slots:
  void getData();
  void List();
  void teste();
private slots:
  void on_Conectar_clicked();

  void on_Desconectar_clicked();

  void on_Update_clicked();

  void on_Start_clicked();

  void timerEvent(QTimerEvent *e);

  void on_Stop_clicked();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int timer;
};

#endif // MAINWINDOW_H
