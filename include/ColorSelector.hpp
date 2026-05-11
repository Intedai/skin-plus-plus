#pragma once

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QComboBox>
#include "ColorWheel.hpp"
#include "ColorButtons.hpp"

class ColorSelector : public QWidget
{
    Q_OBJECT
    
public:
    ColorSelector(QWidget *parent = nullptr);
signals:
    void ColorSelected(const QColor& color);
};