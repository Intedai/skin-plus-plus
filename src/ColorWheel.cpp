#include "ColorWheel.hpp"

ColorWheel::ColorWheel(QWidget *parent)
    : QWidget(parent)
{
}

QSize ColorWheel::sizeHint() const
{
    return QSize(RADIUS * 2, RADIUS * 2);
}

void ColorWheel::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);

    QPointF center(RADIUS, RADIUS);
    
    // The color gradient 
    QConicalGradient hsvGradient(center, 0);

    for(int deg{0}; deg < 360; deg++)
    {
        QColor color = QColor::fromHsvF((360 - 1 - deg) / 360.0, 1, 1);
        hsvGradient.setColorAt(deg / 360.0, color);
    }

    // White gradient in the center
    QRadialGradient whiteGradient(center, RADIUS);
    whiteGradient.setColorAt(0, Qt::white);
    whiteGradient.setColorAt(1, Qt::transparent);

    // Transparent border
    p.setPen(Qt::transparent);
    
    // First draw the color gradient
    p.setBrush(hsvGradient);
    p.drawEllipse(rect());

    // Draw the white radial gradient on top
    p.setBrush(whiteGradient);
    p.drawEllipse(rect());
}