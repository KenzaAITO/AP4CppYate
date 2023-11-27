#ifndef DUMMY_CAPTEUR_TEMP_H
#define DUMMY_CAPTEUR_TEMP_H

#include "CapteurTemp.hpp"

class DummyCapteurTemp : public CapteurTemp {
public:
    DummyCapteurTemp() = default;
    virtual ~DummyCapteurTemp() = default;

    float getTemp() override;
};

#endif /* DUMMY_CAPTEUR_TEMP_H */
