#include <iostream>
#include <algorithm>
#include "sickkoala.h"

SickKoala::SickKoala(std::string name) {
	this->name = name;
}

SickKoala::~SickKoala() {
	std::cout << "Mr." << this->name << ": Kreooogg !! Je suis gueriiii !" << std::endl;
}

void SickKoala::poke()
{
	//std::cout << "Mr." << this->name << ": Gooeeeeerrk !! :'(\n";
	std::cout << "Mr." << this->name << ": Gooeeeeerrk !! :'(" << std::endl;
}

bool SickKoala::takeDrug(std::string s)
{
	std::string originName = s;
	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	if (s == "mars") {
		//std::cout << "Mr."<<this->name<<": Mars, and it  kreogs!\n";
		std::cout << "Mr." << this->name << ": Mars, et ca kreog !" << std::endl;
		return (true);
	}
	if (originName == "Buronzand") {
		std::cout << "Mr." << this->name << ": Et la fatigue a fait son temps !" << std::endl;
		return (true);
	}
	std::cout << "Mr." << this->name<<": Goerkreog !" << std::endl;
	return (false);
}

void SickKoala::overDrive(std::string s) {
	std::size_t found = s.find("Kreog");
	if (found != std::string::npos)
		s.replace(s.find("Kreog"), 5, "1337");
	found = s.rfind("Kreog");
	if (found != std::string::npos)
		s.replace(s.rfind("Kreog"), 5, "1337");

	std::cout << "Mr." << this->name << ": " << s << std::endl;
}

std::string SickKoala::getName()
{
	return (this->name);
}
