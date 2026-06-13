#pragma once

#include <QWidget>
#include <QPainter>
#include <QRect>
#include <QMouseEvent>
#include "Document.hpp"

class CanvasView : public QWidget
{
    Q_OBJECT
    
public:
    CanvasView(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override;
    //void mousePressEvent(QMouseEvent *event) override;
private:
    Document document;
};