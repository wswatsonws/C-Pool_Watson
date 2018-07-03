#ifndef KOALANURSE_H
# define KOALANURSE_H

#include <iostream>
#include "sickkoala.h"

class KoalaNurse {
public:
	int ID;
	bool isWorking;
	KoalaNurse(int);
~KoalaNurse();
	void giveDrug(std::string, SickKoala*);
	std::string readReport(std::string);
	void timeCheck();
	int getID();
};

#endif
