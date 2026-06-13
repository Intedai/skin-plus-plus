#include "CanvasView.hpp"

CanvasView::CanvasView(QWidget* parent)
    : QWidget(parent),
      document(64, 64)
{
    setAttribute(Qt::WA_StaticContents);
}

void CanvasView::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    QRect dirtyRect = event->rect();
    p.drawImage(dirtyRect, document.getImage(), dirtyRect);
}