#ifndef KOALADOCTOR_H
#define KOALADOCTOR_H

#include <iostream>
#include "sickkoala.h"
#include "koalanurse.h"

class KoalaDoctor {
public:
	std::string name;
	bool isWorking;

	KoalaDoctor(std::string);
	~KoalaDoctor();
	void diagnose(SickKoala*);
	void timeCheck();
	std::string getName();
};

#endif
