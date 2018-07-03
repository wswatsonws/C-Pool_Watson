#ifndef _KOALANURSE_
#define _KOALANURSE_

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>

class KoalaNurse{
	int id;
	bool work;
	public:
	KoalaNurse(int id);
	~KoalaNurse();
	void	giveDrug(std::string drug, SickKoala *SickKoala);
	std::string readReport(std::string report);
	void	 timeCheck();
};

#endif
