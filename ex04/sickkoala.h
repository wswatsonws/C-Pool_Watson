#ifndef SICKKOALA_H_
#define SICKKOALA_H_

#include <iostream>
class SickKoala
{

private:
	std::string name;

public:
	SickKoala(std::string name);
	std::string getName();
	void setName(std::string name);
	void poke();
	bool takeDrug(std::string param);
	void overDrive(std::string message);
	~SickKoala();
};

#endif
