/**
 *	@file		appThermostat.cpp
 * 	@brief 		appThermostat definition file
 * 	@author		
 * 	@date		
 * 
 */
#include "appThermostat.hpp"
#include "DummyCapteurTemp.hpp"


ThermostatApp::ThermostatApp(Chaudiere* pChaudiere): pChaudiere(pChaudiere){}
//----------------------------------------------------------------------
void	ThermostatApp::Init()
{
	// Init chaudiere capteur temp
    pChaudiere = std::make_unique<DummyChaudiere>();

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
        float currentTemp = capteur.getTemp();
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
DummyCapteurTemp ThermostatApp::getCapteur(){return this->capteur;}
		
std::unique_ptr<Chaudiere>& ThermostatApp::getPChaudiere(){return pChaudiere;}
		
std::array<float, filterSize> ThermostatApp::getTabTemp(){ return this->tabTemp;}
        
unsigned int ThermostatApp::getPtr(){ return this->ptr;} 

std::mutex& ThermostatApp::getArrayMutex()
{
    return arrayMutex;
} 

float ThermostatApp::getConsigne(){return this->consigne;}

float ThermostatApp::getHysteresis(){return this->hysteresis;}


		
//----------------------------------------------------------------------

