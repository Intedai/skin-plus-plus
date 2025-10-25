#pragma once

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QComboBox>
// FOR DEBUG:
#include <QDebug>
// ----------
#include "ColorWheel.hpp"

class ColorSelector : public QWidget
{
    Q_OBJECT
    
    public:
        ColorSelector(QWidget *parent = nullptr);
    //private slots:
};