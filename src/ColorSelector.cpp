#include "ColorSelector.hpp"

ColorSelector::ColorSelector(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *moreButton = new QPushButton(tr("More") + " > >");

    QHBoxLayout *topLayout = new QHBoxLayout();
    topLayout->addWidget(moreButton);
    
    QVBoxLayout *mainLayout = new QVBoxLayout();
    ColorWheel *cw = new ColorWheel();

    mainLayout->addLayout(topLayout);
    mainLayout->addWidget(cw);
    
    setLayout(mainLayout);

    setFixedSize(sizeHint());

    setWindowFlags(Qt::WindowStaysOnTopHint | Qt::Tool);
    setWindowTitle(tr("Colors"));
}