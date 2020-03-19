#include "Poisson.h"
#include <QPainter>
#include <QWidget>

void Poisson::affiche(QPainter& painter)
{
    painter.drawRect(x, y, 20, 5);
}

void Poisson::deplacer(QWidget * aquarium)
{
    switch (direction) {
        case 0 :
            if (x < aquarium->width() - 10)
                x += 0.1;
            else
                direction = (direction + 1) % 4;
            if (y < aquarium->height() - 10)
                y += 0.1;
            else
                direction = (direction + 1) % 4;
        break;

        case 1 :
            if (x < aquarium->width() - 10)
                x += 0.1;
            else
                direction = (direction + 1) % 4;
            if (y > 10)
                y -= 0.1;
            else
                direction = (direction + 1) % 4;
        break;

        case 2 :
            if (x > 10)
                x -= 0.1;
            else
                direction = (direction + 1) % 4;
            if (y > 10)
                y -= 0.1;
            else
                direction = (direction + 1) % 4;
        break;

        case 3 :
            if (x > 10)
                x -= 0.1;
            else
                direction = (direction + 1) % 4;
            if (y < aquarium->height() - 10)
                y += 0.1;
            else
                direction = (direction + 1) % 4;
        break;

    }

}

void Poisson::initPosition(double x, double y)
{
    x = x;
    y = y;
}

void Poisson::setDirection(int direction)
{
    direction = direction;
}
