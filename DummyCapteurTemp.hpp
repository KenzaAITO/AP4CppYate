#ifndef DUMMY_CAPTEUR_TEMP_H
#define DUMMY_CAPTEUR_TEMP_H

#include "CapteurTemp.hpp"

#include <iostream>
#include <thread>
#include <array>
#include <mutex>
#include <stdio.h>
#include <stdlib.h>
#include <random>

constexpr int16_t defaultTmin = -10;
constexpr int16_t defaultTmax = 40;
constexpr uint16_t defaultDeltaMax = 2;
constexpr int16_t defaultStartTemp = 15;

class DummyCapteurTemp : public CapteurTemp 
{
public:
    DummyCapteurTemp() = default;
    DummyCapteurTemp(int16_t Tmin, int16_t Tmax, uint16_t DeltaMax, int16_t prevTemp); //constructeur avec tous les params

    virtual ~DummyCapteurTemp() = default;

    float getTemp() override;

    //accessor 
        int16_t         getTmin();
        int16_t         getTmax();
        uint16_t        getDeltaMax();
        int16_t         getPrevTemp();

private:
    
        std::default_random_engine mutable generator;
        int16_t Tmin{defaultTmin};
        int16_t Tmax{defaultTmax};
        uint16_t DeltaMax{defaultDeltaMax};
        int16_t mutable prevTemp{defaultStartTemp};

};

#endif /* DUMMY_CAPTEUR_TEMP_H */
