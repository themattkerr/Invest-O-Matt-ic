#include "griddisplay.h"
#include "ui_griddisplay.h"

GridDisplay::GridDisplay(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GridDisplay)
{
    ui->setupUi(this);
}

GridDisplay::~GridDisplay()
{
    delete ui;
}
