#ifndef _POISSON_H
#define _POISSON_H

#include <QPainter>
#include <QWidget>

class Poisson {
    double x, y;
    int direction;

    public :
        void initPosition(double x, double y);
        void setDirection(int direction);
        void affiche(QPainter& painter);
        void deplacer(QWidget * widget);

};


#endif
