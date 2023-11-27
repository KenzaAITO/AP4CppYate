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
	
	if (getStatus() == Chaudiere::Status::ON) {
        throw BoilerAlreadyONexception();
    }
    std::cout << "DummyChaudiere est maintenant allumée." << std::endl;
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
	printf("status: %d \n", status);
	std::cout << "modification du status" << std::endl;
	this->status = status;
	printf("status: %d \n", status);
}

