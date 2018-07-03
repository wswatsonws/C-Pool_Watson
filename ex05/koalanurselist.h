#ifndef KOALANURSELIST_H
#define KOALANURSELIST_H

#include <iostream>
#include "koalanurse.h"

class KoalaNurseList {
public:
	KoalaNurse *nurse;
	KoalaNurseList *next;
	KoalaNurseList(KoalaNurse*);
	bool isEnd();
	void append(KoalaNurseList*);
	KoalaNurseList *remove(KoalaNurseList*);
	KoalaNurseList *removeFromID(int);
	void dump();
};


#endif
