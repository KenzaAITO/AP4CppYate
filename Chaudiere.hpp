/**
 * 
 *	@file	Chaudiere.hpp
 * 	@brief 	Header file for the Chaudiere interface and the 
 * 			DummyChaudiere concrete class
 * 	@author	
 * 	@date	
 * 
 */
#ifndef __CHAUDIERE_H__
#define	__CHAUDIERE_H__

#include <iostream>

//----------------------------------------------------------------------
class	BoilerAlreadyONexception:public std::exception{};			/**< Exception thrown if trying to set ON an already on boiler	*/
class	BoilerAlreadyOFFexception:public std::exception{};			/**< Exception thrown if trying to set OFF an already off boiler	*/
//----------------------------------------------------------------------
/**
 * 	Class Chaudiere
 * 
 * 	Interface to a "boiler" 
 */
class Chaudiere{
	public:
		enum class Status {	ON,			/**<	Boiler ON status value	*/
							OFF			/**<	Boiler OFF status value	*/
		};
	private:
		Status	status{Status::OFF};	/**<	Boiler status	*/
	protected:
		/**
		*	Setter for the status field
		* 	@param[in] : new status
		* 
		* 	noexcept : this function throws no exception
		* 
		*/	 
		void	setStatus(Status status) noexcept ;
	public:
		Chaudiere() = default;					/**<	Defaulted default Ctor	*/
		virtual ~Chaudiere() = default;			/**<	Defaulted Dtor			*/
		
		/**
		*	getter for the status field
		* 	
		* 	noexcept : this function throws no exception
		* 
		* 	@return : heater status
		*/	
		Status	getStatus(){return this->status;};
		
		/**
		*	setON() function - pure virtual function
		* 		Sets the boiler on (if not) 
		* 
		* 	@throw	HeaterAlreadyONexception	if the boiler is already on
		* 
		*/	
		virtual	void 	setON() = 0;
		
		/**
		*	setOFF() function - pure virtual function
		* 		Sets the boiler off (if not) 
		* 
		* 	@throw	HeaterAlreadyOFFexception	if the boiler is already off
		* 
		*/	
		virtual void 	setOFF() = 0;
	
};
//----------------------------------------------------------------------
class DummyChaudiere : public Chaudiere{
	private:
	
	public:
		DummyChaudiere() = default;				/**<	Defaulted default Ctor	*/
		virtual ~DummyChaudiere() = default;	/**<	Defaulted Dtor			*/
	
		/**
		*	setON() function
		* 		Sets the boiler on (if not) 
		* 
		* 	@throw	HeaterAlreadyONexception	if the boiler is already on
		* 
		*/	
		virtual	void 	setON();
		
		/**
		*	setOFF() function
		* 		Sets the boiler off (if not) 
		* 
		* 	@throw	HeaterAlreadyOFFexception	if the boiler is already off
		* 
		*/	
		virtual void 	setOFF();
	
};

#endif//----------------------------------------------------------------------

