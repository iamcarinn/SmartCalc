#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;
  double xBegin, xEnd, h, X;
  int N;

  QVector<double> x, y;
  QTimer *timer;
  int time;

 private slots:
  void operations();
  void on_pushButton_del_clicked();
  void on_pushButton_equally_clicked();
  void on_pushButton_del_char_clicked();
  void on_pushButton_graph_clicked();
  void TimerSlot();
  void on_pushButton_clear_clicked();
  void on_pushButton_kredit_res_clicked();
};

#endif  // MAINWINDOW_H
