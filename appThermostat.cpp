/**
 *	@file		appThermostat.cpp
 * 	@brief 		appThermostat definition file
 * 	@author		
 * 	@date		
 * 
 */
#include "appThermostat.hpp"
#include "DummyCapteurTemp.hpp"

//----------------------------------------------------------------------
void	ThermostatApp::Init()
{
	// Init chaudiere capteur temp
    pChaudiere = std::make_shared<DummyChaudiere>();
    pCapteur = std::make_shared<DummyCapteurTemp>();

    // Vérif chaudiere pas nullptr, sinon lancez exception
    if (!pChaudiere) {
        throw NoBoilerException();
    }

    // Déf consigne temp
    consigne = 21.0;

}
//----------------------------------------------------------------------
void	ThermostatApp::Run()
{
    bool shouldRun = true ;
	// boucle principale
    while (shouldRun) { // shouldRun est une variable booléenne contrôlant la boucle
        float currentTemp = pCapteur->getTemp();
        std::cout << "Température actuelle : " << currentTemp << " °C" << std::endl;

        if (currentTemp < consigne) {
            pChaudiere->setON();
        } else {
            pChaudiere->setOFF();
        }

        // Attendre avant la prochaine
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
}
//----------------------------------------------------------------------
//void	ThermostatApp::Run(){
	/**<	 Nothing to do in the main task	*/
//}
//----------------------------------------------------------------------
unsigned int ThermostatApp::getPtr(){ return } 

std::mutex ThermostatApp::getArrayMutex(); 

float ThermostatApp::getConsigne();

float ThermostatApp::getHysteresis();

//----------------------------------------------------------------------

