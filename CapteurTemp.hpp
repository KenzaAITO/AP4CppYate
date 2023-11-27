/**
 *	@file	CapteurTemp.hpp
 * 	@brief 	Header file for temperature sensor interface
 * 	@author		
 * 	@date	
 * 
 */

#ifndef __CAPTEUR_TEMP_H__
#define	__CAPTEUR_TEMP_H__

#include <iostream>
#include <vector>
#include <fstream>
#include <filesystem>

/**
 * 	CapteurTemp Class (Interface)
 * 
 * 
 */
class CapteurTemp{
	
	public:
		CapteurTemp() = default;
		virtual ~CapteurTemp() = default;
		
		
		virtual float 	getTemp() = 0;
	
};


 
#endif	/* __CAPTEUR_TEMP_H__ */
