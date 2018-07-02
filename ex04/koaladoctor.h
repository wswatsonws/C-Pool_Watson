#ifndef _KOALADOCTOR_
#define _KOALADOCTOR_

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>

class KoalaDoctor{
	std::string   name;
	bool		work;

	public:
	KoalaDoctor(std::string name);
	~KoalaDoctor();
	void	diagnose(SickKoala *SickKoala);
	void	timeCheck();
};

#endif
