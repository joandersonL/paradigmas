#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QVector>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
}

void MainWindow::timerEvent(QTimerEvent *e){ // Função para ficar reenviando a cada tempo
    getData();
}

void MainWindow::getData(){ //Função que recebe os valores da data e número gerado pelo produtor
  QString str;
  QByteArray array;
  QStringList list;
  QDateTime datetime;
  QVector <double>datas;
  QVector <double>dados;
  QVector <qint64> tmpp;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      str="get "+ui->listWidget->currentItem()->text();
      socket->write(str.toStdString().c_str());
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          datetime = QDateTime::fromString(list.at(0),Qt::ISODate);
          qint64 valor = datetime.toMSecsSinceEpoch();
          str = list.at(1);
          float trc = str.toFloat();
          tmpp.push_back(valor);
          dados.push_back(trc);
        }
      }
      for(int i=0; i<tmpp.size(); i++){
          datas.push_back(tmpp[i] - tmpp[0]);
      }
    }
  }
  ui->widget->recebedados(datas,dados);
}

void MainWindow::List(){ //Mostra os ips conectados ao servidor no listWidget
    QString str;

    qDebug() << "to get List...";
    if(socket->state() == QAbstractSocket::ConnectedState){
      if(socket->isOpen()){
        qDebug() << "reading...";
        socket->write("list\r\n");
        socket->waitForBytesWritten();
        socket->waitForReadyRead();
        qDebug() << socket->bytesAvailable();
        while(socket->bytesAvailable()){
          str = socket->readLine().replace("\n","").replace("\r","");
          qDebug() << str;
          ui->listWidget->addItem(str);
        }
      }
    }
}

MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}

void MainWindow::on_Conectar_clicked() //Conecta ao servidor
{
    socket->connectToHost(ui->lineEdit->text(),1234);
    if(socket->waitForConnected(3000)){
      qDebug() << "Connected";
    }
    else{
      qDebug() << "Disconnected";
    }
}

void MainWindow::on_Desconectar_clicked() //Desconecta do servidor
{
    socket->close();
}

void MainWindow::on_Update_clicked() //Atualiza a lista dos ips do servidor no listWidget
{
    ui->listWidget->clear();
    List();
}

void MainWindow::on_Start_clicked() // Inicia o recebimento de dados
{
    int inicio = ui->horizontalSlider->value(); // Cria uma variável para receber o valor do horizontalSlider
    timer = startTimer(inicio*1000); // Inicia o Timer de acordo com o escolhido em timing
}

void MainWindow::on_Stop_clicked() // Para o recebimento de dados
{
    killTimer(timer);
}
