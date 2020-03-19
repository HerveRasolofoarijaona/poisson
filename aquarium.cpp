#include <QPainter>
#include <QTimer>
#include "aquarium.h"

// static const int N_POISSON  = 4;

Aquarium::Aquarium() {

    for (int i=0;i<N_POISSON;++i) {
        poissons[i] = new Poisson();
        poissons[i]->initPosition(100.0,100.0);
        poissons[i]->setDirection(i % 4);
    }

    for (int u=0;u<N_POISSON;++u) {
        zaza[u] = new Poisson();
        zaza[u]->initPosition(40.0,50.0);
        zaza[u]->setDirection(u % 4);
    }

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1);
}

void Aquarium::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::SquareCap));
    this->affiche(painter);

}

void Aquarium::affiche(QPainter& painter)
{
    for (int i=0; i<N_POISSON; ++i)
    {
        poissons[i]->affiche(painter);
        poissons[i]->deplacer(this);

        zaza[i]->affiche(painter);
        zaza[i]->deplacer(this);

    }
}
