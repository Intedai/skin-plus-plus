#pragma once

#include <QWidget>
#include <QPainter>
#include <QPainterPath>
#include <QColor>

class ColorButtons : public QWidget
{
    Q_OBJECT
public:
    ColorButtons(QWidget* parent = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override;
public slots:
    void setColor(int index, QColor color);
    void setForegroundColor(QColor color);
    void setBackgroundColor(QColor color);
private:
    QColor colors[2];
};