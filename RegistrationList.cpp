/*    
 *  QFES - QT Foil+Epee+Saber: Fencing tournament software. 
 *  Copyright (C) 2016  Alexander Kraus <alexander.kraus@student.kit.edu>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "RegistrationList.h"

#include <QtGui/QPainter>
#include <QtGui/QFont>
#include <QtWidgets/QWidget>
#include <QtWidgets/QStyleOptionGraphicsItem>
#include <QtCore/QMarginsF>

QRectF RegistrationList::boundingRect() const
{
    return QRectF(0,0, m_width, m_height);
}

void RegistrationList::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    QPen oldpen = painter->pen(), pen = oldpen;
    pen.setColor(m_line_color);
    pen.setWidthF(m_border_size);
    painter->setPen(pen);
    QFont oldfont = painter->font(), font = oldfont;
    painter->setFont(font);
    QRectF border = boundingRect()+QMarginsF(m_border_size/2., m_border_size/2., -m_border_size, -m_border_size);
    painter->drawRect(boundingRect());
    painter->setPen(oldpen);
    painter->setFont(oldfont);
    
    painter->drawLine(0, 0, m_width, m_height);
}

void RegistrationList::resize(QRectF newsize)
{
    m_width = newsize.width();
    m_height = newsize.height();
    ((QGraphicsItem*)this)->update();
}

RegistrationList::RegistrationList(QGraphicsItem* parent)
    : QGraphicsItem(parent)
    , m_width(100)
    , m_height(100)
    , m_border_size(2.)
{

}

RegistrationList::~RegistrationList()
{

}
