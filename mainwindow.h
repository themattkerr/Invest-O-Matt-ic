#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "propertyinfo.h"
#include "csvimport.h"
#include "mattcalculations.h"
#include "mortgagecalc.h"
#include "propertysqrftstats.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
