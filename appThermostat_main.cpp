
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

    std::cout << "Program START " << std::endl;
    
    std::cout << "BEGGIN TEST CHAUDIERE  \n" << std::endl;
	DummyChaudiere maChaudieretest;

    // esssaie pour allumer la chaudière
    try {
        maChaudieretest.setON();
        //std::cout << "La chaudière a été allumée." << std::endl;
    } catch (const BoilerAlreadyONexception& e) {
        std::cerr << "Erreur : La chaudière est déjà allumée !" << std::endl;
    }

    // try to turn off 
    try {
        maChaudieretest.setOFF();
       // std::cout << "La chaudière a été éteinte." << std::endl;
    } catch (const BoilerAlreadyOFFexception& e) {
        std::cerr << "Erreur : La chaudière est déjà éteinte !" << std::endl;
    }

    //essaie pour l'éteindre pour déclecher l'except
    try {
        maChaudieretest.setOFF();
    } catch (const BoilerAlreadyOFFexception& e) {
        std::cerr << "Erreur capturée : La chaudière est déjà éteinte !" << std::endl;
    }

    try {
        maChaudieretest.getStatus();
    }
    catch(const Chaudiere& e ) 
    {
        std::cerr << "Erreur capturée : Impossible d'avoir un getStatus !" << std::endl;
    }
    //allumer la chaudiere 
    DummyChaudiere maChaudiere;

    try {
        maChaudiere.setON();
    } catch (const BoilerAlreadyONexception& e) {
        std::cerr << "Erreur : La chaudière est déjà allumée !" << std::endl;
    }

    std::cout << "END TEST CHAUDIERE  \n" << std::endl;
    std::cout << "BEGGIN TEST CAPTER  \n" << std::endl;
    DummyCapteurTemp monCapteurDefaultValue; // instance de DummyCapteurTemp
    DummyCapteurTemp monCapteurParamtest(-20,35,4,12); // instance de DummyCapteurTemp


// Test du capteur temp sans param
    float temperature = monCapteurDefaultValue.getTemp(); // Temp simulée
    std::cout << "La température actuelle est : " << temperature << " °C" << std::endl;
    
    float Tmin = monCapteurDefaultValue.getTmin();
    std::cout << "La température MIN est : " << Tmin << " °C" << std::endl;

    float Tmax = monCapteurDefaultValue.getTmax();
    std::cout << "La température MAX est : " << Tmax << " °C" << std::endl;

    float deltaMax = monCapteurDefaultValue.getDeltaMax();
    std::cout << "La température deltaMax  est : " << deltaMax  << " °C" << std::endl;

    float prevTemp = monCapteurDefaultValue.getPrevTemp();
    std::cout << "La température prevTemp  est : " << prevTemp  << " °C" << std::endl;
    


    // Test du capteur temp sans param
    float temperature2 = monCapteurParamtest.getTemp(); // Temp simulée
    std::cout << "La température2 actuelle est : " << temperature2 << " °C" << std::endl;
    
    float Tmin2 = monCapteurParamtest.getTmin();
    std::cout << "La température MIN2 est : " << Tmin2 << " °C" << std::endl;

    float Tmax2 = monCapteurParamtest.getTmax();
    std::cout << "La température MAX2 est : " << Tmax2 << " °C" << std::endl;

    float deltaMax2 = monCapteurParamtest.getDeltaMax();
    std::cout << "La température deltaMax2  est : " << deltaMax2  << " °C" << std::endl;

    float prevTemp2 = monCapteurParamtest.getPrevTemp();
    std::cout << "La température prevTemp2  est : " << prevTemp2  << " °C" << std::endl;
    



    std::cout << "END TEST CAPTER  \n" << std::endl;
   /**
    * 
    * 
    *  do
    {
         //tester l'app 
         
        for(int i= 0 ; i > 5; i++)
        {
            i += 1;
            std::cout << i << std::endl;
        }
        maChaudiere.setOFF();

    } while (maChaudiere.getStatus() != Chaudiere::Status::ON);
    std::cout << " Bye Bye !" << std::endl;*/
    return 0;
}





