#ifndef SQUARENODE_H
#define SQUARENODE_H

#include <QGraphicsItem>
#include <QRectF>
#include <QPen>
#include <QBrush>
#include <QGraphicsProxyWidget>
#include <QGraphicsRectItem>
#include <QList>
#include <QGraphicsLineItem>

#include "nodescolor.h"

class SquareNode : public QGraphicsRectItem
{
public:
    SquareNode();
    ~SquareNode();
    QList<QGraphicsLineItem*> lines;
    void addLine(QGraphicsLineItem* line);
private:

};

#endif // SQUARENODE_H
