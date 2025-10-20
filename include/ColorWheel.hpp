#pragma once

#include <QWidget>
#include <QPainter>
#include <QSize>
#include <QPointF>
#include <QColor>
#include <QConicalGradient>
#include <QRadialGradient>

class ColorWheel : public QWidget
{
    Q_OBJECT

    public:
        ColorWheel(QWidget* parent = nullptr);
        static constexpr double RADIUS {130 / 2.0};
        QSize sizeHint() const override;
    protected:
        void paintEvent(QPaintEvent *event) override;    
};