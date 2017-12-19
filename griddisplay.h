#ifndef GRIDDISPLAY_H
#define GRIDDISPLAY_H

#include <QMainWindow>

namespace Ui {
class GridDisplay;
}

class GridDisplay : public QMainWindow
{
    Q_OBJECT

public:
    explicit GridDisplay(QWidget *parent = 0);
    ~GridDisplay();

private:
    Ui::GridDisplay *ui;
};

#endif // GRIDDISPLAY_H
