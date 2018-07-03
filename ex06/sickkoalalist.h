#ifndef SICKKOALALIST_H
#define SICKKOALALIST_H

#include <iostream>
#include "sickkoala.h"

class SickKoalaList {
public:
	SickKoala *koala;
    SickKoalaList *next;
	SickKoalaList(SickKoala*);
	bool isEnd();
	void append(SickKoalaList*);
	SickKoala *getFromName(std::string);
	SickKoalaList *remove(SickKoalaList*);
	SickKoalaList *removeFromName(std::string);
	SickKoala *getContent();
	SickKoalaList *getNext();
	void dump();
};


#endif //CPP_D06_SICKKOALALIST_H
