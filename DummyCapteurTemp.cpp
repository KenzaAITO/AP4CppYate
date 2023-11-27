#include "DummyCapteurTemp.hpp"
#include <cstdlib> 
#include <ctime> 

DummyCapteurTemp::DummyCapteurTemp(int16_t Tmin, int16_t Tmax, uint16_t DeltaMax, int16_t prevTemp)
                : Tmin(defaultTmin), Tmax(defaultTmax), DeltaMax(defaultDeltaMax), prevTemp(defaultStartTemp){}       


float DummyCapteurTemp::getTemp() {
    // Init le génértr de nbrs aléatr 
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Temp20.0 et 25.0
    float temp = 20.0f + static_cast<float>(std::rand()) / (static_cast<float>(RAND_MAX / 5.0f));
    return temp;
}

    //accessor 
int16_t         DummyCapteurTemp::getTmin(){return this->Tmin;}
int16_t         DummyCapteurTemp::getTmax(){return this->Tmax;}
uint16_t        DummyCapteurTemp::getDeltaMax(){return this->DeltaMax;}
int16_t         DummyCapteurTemp::getPrevTemp(){return this->prevTemp;}