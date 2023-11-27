/**
 *	@file		Chaudiere.cpp
 * 	@brief 		Definition file for (concrete) Boiler
 * 	@author		
 * 	@date		
 * 
 */
#include "Chaudiere.hpp"

//----------------------------------------------------------------------
void 	DummyChaudiere::setON(){
	
	if(getStatus() == Chaudiere::Status::ON) {
        throw BoilerAlreadyONexception();
    }
    std::cout << "DummyChaudiere est allumée." << std::endl;
    setStatus(Chaudiere::Status::ON);
	
	}
//----------------------------------------------------------------------
void 	DummyChaudiere::setOFF(){
	
	if (getStatus() == Chaudiere::Status::OFF) {
        throw BoilerAlreadyOFFexception();
    }
    std::cout << "DummyChaudiere est maintenant éteinte." << std::endl;
    setStatus(Chaudiere::Status::OFF);
	
}
//----------------------------------------------------------------------

void	Chaudiere::setStatus(Status status) noexcept 
{
	//Status stat; // Déclaration d'une variable de type Status
    std::cout << "modification du status" << std::endl;
    this->status = status;
    std::string nom_status = this->status == Status::OFF ? "OFF" : "ON";
    printf("new Status %s \n", nom_status.c_str());
}

