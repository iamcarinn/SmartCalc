#include "mainwindow.h"

#include "./ui_mainwindow.h"

extern "C" {
#include "s21_calc.h"
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  ui->widget->setInteraction(QCP::iRangeZoom, true);
  ui->widget->setInteraction(QCP::iRangeDrag, true);

  // ИЗНАЧАЛЬНЫЙ ГРАФИК

  ui->widget->xAxis->setRange(-15, 15);
  ui->widget->yAxis->setRange(-15, 15);

  connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_dot, SIGNAL(clicked()), this, SLOT(operations()));

  connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_pow, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_open, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_close, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(operations()));
  connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(operations()));

  connect(ui->pushButton_del, SIGNAL(clicked()), this,
          SLOT(on_pushButton_del_clicked()));
  connect(ui->pushButton_kredit_res, SIGNAL(clicked()), this,
          SLOT(on_pushButton_kredit_res_clicked()));
}

MainWindow::~MainWindow() { delete ui; }

// Ввод операций
void MainWindow::operations() {
  QPushButton *button = (QPushButton *)sender();
  QString new_label;
  new_label = (ui->result_show->text() + button->text());

  ui->result_show->setText(new_label);
}

//// Очистка строки
void MainWindow::on_pushButton_del_clicked() { ui->result_show->setText(""); }

void MainWindow::on_pushButton_del_char_clicked() {
  ui->result_show->backspace();
}

//// Знак равенства
void MainWindow::on_pushButton_equally_clicked() {
  char *str = new char(ui->result_show->text().length());
  QByteArray barr = ui->result_show->text().toLatin1();
  strlcpy(str, barr, ui->result_show->text().length() + 1);

  if (!valid(str)) {
    stack_ready *calc = {0};
    polish(str, &calc);
    double result = my_calc(calc, 0);
    QString new_label = QString::number(result);
    ui->result_show->setText(new_label);
  } else
    ui->result_show->setText("Ошибка ввода");
}

void MainWindow::on_pushButton_graph_clicked() {
  ui->label_error->setText("");
  xBegin = ui->doubleSpinBox_xmin->value();
  xEnd = ui->doubleSpinBox_xmax->value();
  N = ui->spinBox_n->value();
  h = (xEnd - xBegin) / N;

  if (xBegin < xEnd) {
    ui->widget->xAxis->setRange((xBegin - 5), (xEnd + 5));
    ui->widget->yAxis->setRange(ui->doubleSpinBox_ymin->value() - 5,
                                ui->doubleSpinBox_ymax->value() + 5);

    N = (xEnd - xBegin) / h + 2;
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));
    ui->widget->clearGraphs();
    timer->start(20);
    X = xBegin;
    x.clear();
    y.clear();
  } else
    ui->result_show->setText("Error: Минимум меньше максимума");
}

void MainWindow::TimerSlot() {
  char *str = new char(ui->result_show->text().length());
  QByteArray barr = ui->result_show->text().toLatin1();
  strlcpy(str, barr, ui->result_show->text().length() + 1);

  if (!valid(str)) {
    stack_ready *calc = {0};
    polish(str, &calc);

    if (time <= 20 * N) {
      if (X <= xEnd) {
        double cur_y = my_calc(calc, X);
        if (cur_y >= ui->doubleSpinBox_ymin->value() &&
            cur_y <= ui->doubleSpinBox_ymax->value()) {
          x.push_back(X);
          y.push_back(cur_y);
        }
        X += h;
      }
      time += 20;
    } else {
      time = 0;
      timer->stop();
    }

    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x, y);
    ui->widget->replot();
  }
}

// Не работает
void MainWindow::on_pushButton_clear_clicked() {
  ui->widget->clearGraphs();
  ui->widget->replot();
}

void MainWindow::on_pushButton_kredit_res_clicked() {
  double res_mon = 0;
  double res_proz = 0;
  double res_total = 0;
  double res_begin = 0;
  double res_end = 0;

  double sum = ui->doubleSpinBox_sum->value();
  double proz = ui->doubleSpinBox_proz->value();
  int month = ui->spinBox_time->value();

  int time_type = ui->comboBox_time_type->currentIndex();
  if (time_type == 0) {
    month *= 12;
  }

  int type = ui->comboBox_type_pay->currentIndex();

  if (type == 0) {
    kredit_an(sum, month, proz, &res_mon, &res_proz, &res_total);
    QString new_month = QString::number(res_mon);
    ui->label_res_mon->setText(new_month);

  } else {
    kredit_dif(sum, month, proz, &res_begin, &res_end, &res_proz, &res_total);
    QString new_begin = QString::number(res_begin);
    QString new_end = QString::number(res_end);
    QString new_label = (new_begin + "..." + new_end);
    ui->label_res_mon->setText(new_label);
  }

  QString new_proz = QString::number(res_proz);
  QString new_total = QString::number(res_total);
  ui->label_res_proz->setText(new_proz);
  ui->label_res_total->setText(new_total);
}
