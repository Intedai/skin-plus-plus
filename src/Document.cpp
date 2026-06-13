#include <Document.hpp>

Document::Document(int width, int height)
{
    image = QImage(width, height, QImage::Format_ARGB32_Premultiplied);
    image.fill(Qt::white);
}