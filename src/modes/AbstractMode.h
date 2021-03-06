#ifndef SCREENSHOTGUN_ABSTRACTMODE_H
#define SCREENSHOTGUN_ABSTRACTMODE_H

#include <QGraphicsScene>
#include <QKeyEvent>

class AbstractMode : public QObject {
    Q_OBJECT

public:
    AbstractMode(QGraphicsScene&);

    virtual void init(int x, int y) = 0;
    virtual void move(int x, int y) = 0;
    virtual void stop(int x, int y) = 0;

protected:
    QGraphicsScene& scene_;
    QPen pen;
};

#endif // SCREENSHOTGUN_ABSTRACTMODE_H
