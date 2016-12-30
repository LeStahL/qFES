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

#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "RegistrationList.h"
#include "RegistrationEntry.h"

#include <QtGui/QGraphicsView>

MainWindow::MainWindow(QApplication* parent, Qt::WindowFlags flags)
    : m_ui(new Ui::MainWindow)
    , m_registration_list(new RegistrationList)
{
    m_ui->setupUi(this);
    m_ui->graphicsView->setScene(new QGraphicsScene(this));
    
    m_registration_list->m_border_size = 4.;
    ((QGraphicsItem*)m_registration_list)->update();
//     m_ui->graphicsView().
//     m_registration_list->resize(m_ui->graphicsView->viewport());
    m_ui->graphicsView->scene()->addItem((QGraphicsItem*)m_registration_list);
}

MainWindow::~MainWindow()
{
    delete m_ui;
}
