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

#include "RegistrationEntry.h"

#include <qt5/QtWidgets/QStyleOptionGraphicsItem>
#include <qt5/QtGui/QPainter>

void RegistrationEntry::paint(QPainter *painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    painter->fillRect(boundingRect(), Qt::red);
}

RegistrationEntry::RegistrationEntry(QGraphicsItem* parent)
    : QGraphicsItem(parent)
{

}

RegistrationEntry::~RegistrationEntry()
{

}

QRectF RegistrationEntry::boundingRect() const
{
    //TODO: add dynamic text length with parent list class
    return QRectF(0, 0, 100, 100);
}
