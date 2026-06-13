#pragma once

#include <QImage>
#include <QString>

class Document
{
public:
    Document(int width, int height);
    const QImage& getImage() const {return image;};
    int getWidth() const {return image.width();};
    int getHeight() const {return image.height();};
    bool isModified() const {return modified;};
    bool saveImage(const QString& fileName);
    bool openImage(const QString& fileName);
private:
    QImage image;
    bool modified;
signals:
    void ImageModified();
};