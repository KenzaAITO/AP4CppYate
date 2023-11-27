
/**
 *	@file		appThermostat_main.cpp
 * 	@brief 		main for the Thermostat App 
 * 	@author		
 * 	@date		
 * 
 */
#include <iostream>
#include <memory>

#include "appThermostat.hpp"
#include "Chaudiere.hpp"
#include "DummyCapteurTemp.hpp"

int main() {
    
	DummyChaudiere maChaudiere;
    DummyCapteurTemp monCapteur; // instance de DummyCapteurTemp

    // Là j'esssaie d'allumer la chaudière
    try {
        maChaudiere.setON();
        //std::cout << "La chaudière a été allumée." << std::endl;
    } catch (const BoilerAlreadyONexception& e) {
        std::cerr << "Erreur : La chaudière est déjà allumée !" << std::endl;
    }

    // Là j'esssaie de l'éteindre
    try {

        maChaudiere.setOFF();
       // std::cout << "La chaudière a été éteinte." << std::endl;
    } catch (const BoilerAlreadyOFFexception& e) {
        std::cerr << "Erreur : La chaudière est déjà éteinte !" << std::endl;
    }

    // Là j'essaie de l'éteindre pour déclch l'except
    try {
        maChaudiere.setOFF();
    } catch (const BoilerAlreadyOFFexception& e) {
        std::cerr << "Erreur capturée : La chaudière est déjà éteinte !" << std::endl;
    }

    // Test du le capteur temp
    float temperature = monCapteur.getTemp(); // Temp simulée
    std::cout << "La température actuelle est : " << temperature << " °C" << std::endl;

    return 0;
}





