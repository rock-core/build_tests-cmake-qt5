#pragma once

#include "ui_main.h"

#include <QMainWindow>

class Gui : public QMainWindow
{
    Q_OBJECT

public:
    Gui(QMainWindow* parent = 0);

    ~Gui() = default;

protected:
    Ui::MainWindow ui;
};
