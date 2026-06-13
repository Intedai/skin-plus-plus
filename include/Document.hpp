#pragma once

#include <QImage>

class Document
{
public:
    Document(int width, int height);
    int getWidth() const {return image.width();};
    int getHeight() const {return image.height();};
private:
    QImage image;
};