#     QFES - QT Foil+Epee+Saber: Fencing tournament software. 
#     Copyright (C) 2016  Alexander Kraus <alexander.kraus@student.kit.edu>
# 
#     This program is free software: you can redistribute it and/or modify
#     it under the terms of the GNU General Public License as published by
#     the Free Software Foundation, either version 3 of the License, or
#     (at your option) any later version.
# 
#     This program is distributed in the hope that it will be useful,
#     but WITHOUT ANY WARRANTY; without even the implied warranty of
#     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#     GNU General Public License for more details.
# 
#     You should have received a copy of the GNU General Public License
#     along with this program.  If not, see <http://www.gnu.org/licenses/>.

cmake_minimum_required(VERSION 2.8.11s)

project(QFES)

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(QFES_SOURCES
    QFES.cpp
    MainWindow.cpp
    RegistrationEntry.cpp
    RegistrationList.cpp
)

if(CMAKE_BUILD_TOOL MATCHES "(msdev|devenv|nmake)")
    add_definitions(/W3)
else()
    add_definitions(-Wall)
endif()
add_executable(qfes ${QFES_SOURCES})
target_link_libraries(qfes Qt5::Widgets)
