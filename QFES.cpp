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

#include <stdio.h>
#include <stdlib.h>

#include <QtWidgets/QApplication>
#include <QtCore/QTranslator>

#include "MainWindow.h"

int main(int argc, char **args)
{
    printf("QFES  Copyright (C) 2016  Alexander Kraus\n\
        This program comes with ABSOLUTELY NO WARRANTY; for details see `Help->About'.\n\
        This is free software, and you are welcome to redistribute it\n\
        under certain conditions; see `Help->About' for details.\n");
    
    QApplication *app = new QApplication(argc, args);
    
    QString locale = QLocale::system().name();
    QTranslator trans;
    trans.load(QString("triss_")+locale);
    app->installTranslator(&trans);

    MainWindow w(app);
    w.show();

    return app->exec();
}
