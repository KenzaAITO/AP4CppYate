# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 20)
# Notre projet est étiqueté hello
project(thermostat)

# Crée des variables avec les fichiers à compiler
set(SRCS
    appThermostat_main.cpp
    appThermostat.cpp
    Chaudiere.cpp
    DummyCapteurTemp.cpp
    )
    
set(HEADERS
    appThermostat.hpp
    CapteurTemp.hpp
    Chaudiere.hpp
    DummyCapteurTemp.hpp
    )
# On indique que l'on veut un exécutable "hello" compilé à partir des fichiers décrits par les variables SRCS et HEADERS
add_executable(thermostat ${SRCS} ${HEADERS})