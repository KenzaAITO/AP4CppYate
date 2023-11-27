/**
 *	@file		appThermostat.hpp
 * 	@brief 		header file for the Application Interface and ThermostatApp class
 * 	@author		
 * 	@date		
 * 
 */
#ifndef __APP_THERMOSTAT_H__
#define	__APP_THERMOSTAT_H__

#include <iostream>
#include <thread>
#include <array>
#include <mutex>
#include "Chaudiere.hpp"
#include "DummyCapteurTemp.hpp"
#include <stdio.h>
#include <stdlib.h>
#include "stdio.h"
#include "stdlib.h"

//----------------------------------------------------------------------
/**
 * 	Class Application
 * 
 * 	Interface to a "classic" embedded (or not) app 
 */
class Application{
	public:
		Application() = default;			/**<	Defaulted default Ctor	*/
		virtual ~Application() = default;	/**<	Defaulted Dtor	*/
		
		virtual void	Init() = 0;			/**<	Pure virtual function - Must include all init stuff	*/
		virtual void	Run() = 0;			/**<	Pure virtual function - Could include some code (or not...)	*/
};
//----------------------------------------------------------------------
/**
 * 	Class ThermostatApp
 * 
 * 	Concrete Thermostat app 
 */

const std::size_t filterSize = 5 ; //taille de notre tableau 
constexpr float defaultConsigne = 18 ; //consigne par defaut
constexpr float defaultHysteresis = 2 ; // + ou - la valeur de la consigne 



class	ThermostatApp: public Application{

	private: //attribus
		
    	std::shared_ptr<DummyCapteurTemp> pCapteur;
		//DummyCapteurTemp capteur{};

		std::shared_ptr<DummyChaudiere> pChaudiere;
		//Chaudiere *pChaudiere{nullptr} ; 
		
		std::array<float ,filterSize > tabTemp{} ; 
		unsigned int ptr{0} ; 
		std::mutex arrayMutex ; 
		float consigne{defaultConsigne} ;
		float hysteresis{defaultHysteresis} ; 
		std::thread measureThread ; //suppose to be a jthread 
		std::thread processingThread ; //suppose to be a jthread
	
	public:
		ThermostatApp() = delete;											/**< Deleted default Ctor		*/
		ThermostatApp(Chaudiere* pChaudiere);
		virtual ~ThermostatApp() = default;
	
	private:
		void addTemp(float temp);
		float getTemp();

		void _measureThread();
		void _processingThread();
	
	public:	
		/**
		 * 	Init function
		 * 		This function : 
		 * 			MUST be called once.
		 * 			Checks the pChaudiere pointer
		 * 			Creates and starts the threads 
		 * 	@throw	NoBoilerException if pChaudiere is a nullptr
		 * 
		 */
		virtual void	Init();
		
		/**
		 * 	Run function
		 * 		main task
		 * 		May be empty (multithreaded app)
		 */
		virtual void	Run();
	
	//accessor

		DummyCapteurTemp getCapteur();
		Chaudiere *getPChaudiere();
		std::array<float, filterSize> getTabTemp(); 
		unsigned int getPtr(); 
		std::mutex getArrayMutex(); 
		float getConsigne() ;
		float getHysteresis(); 

};

class NoBoilerException : public std::exception {
public:
    const char* what() const noexcept override {
        return "No boiler available.";
    }
};

#endif	/* __APP_THERMOSTAT_H__ */

