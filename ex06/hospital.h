#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "sickkoala.h"
#include "koalanurse.h"
#include "koaladoctor.h"
#include "sickkoalalist.h"
#include "koalanurselist.h"
#include "koaladoctorlist.h"

class Hospital {
public:
	KoalaNurseList *nurseList;
	KoalaDoctorList *doctorList;
	SickKoalaList *sickKoalaList;

	void addDoctor(KoalaDoctorList*);
	void addNurse(KoalaNurseList*);
	void addSick(SickKoalaList*);
	void run();
	bool areDocAtWork();
};

#endif 
