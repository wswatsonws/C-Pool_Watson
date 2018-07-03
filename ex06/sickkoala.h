
#ifndef SICKKOALA_H
# define SICKKOALA_H

#include <iostream>

class SickKoala {
	public:
	std::string name;
	SickKoala(std::string);
    	~SickKoala();
	void poke();
	bool takeDrug(std::string);
	void overDrive(std::string);
	std::string getName();
};

#endif 
