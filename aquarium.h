#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <QWidget>
#include <QPainter>
#include "Poisson.h"

static const int N_POISSON  = 4;

class Aquarium  : public QWidget {

    Poisson *poissons[N_POISSON];
    Poisson *zaza[N_POISSON];

public:
    Aquarium();
    void affiche(QPainter& painter);
protected:
    void paintEvent(QPaintEvent *event);

};

#endif // AQUARIUM_H
