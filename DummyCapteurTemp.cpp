#include "DummyCapteurTemp.hpp"
#include <cstdlib> 
#include <ctime> 

float DummyCapteurTemp::getTemp() {
    // Init le génértr de nbrs aléatr 
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Temp20.0 et 25.0
    float temp = 20.0f + static_cast<float>(std::rand()) / (static_cast<float>(RAND_MAX / 5.0f));
    return temp;
}
