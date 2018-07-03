#include <iostream>
#include <algorithm>
#include "sickkoala.h"

std::string SickKoala::getName()
{
	return (this->name);
}

void SickKoala::setName(std::string New)
{
	this->name = New;
}

SickKoala::SickKoala(std::string name)
{
	this->name = name;
}

SickKoala::~SickKoala()
{
	//std::cout << "Mr. " << this->name << ": Kreooogg !! Je suis gueriiii !" << std::endl;
	std::cout << "Mr."<< this->name << ": Kreooogg !! Je suis gueriiii !" << std::endl;
}

void SickKoala::poke()
{
	//std::cout << "Mr." << this->name << ": Gooeeeeerrk !! :’(" << std::endl;
	std::cout << "Mr." << this->name << ": Gooeeeeerrk !! :'(" << std::endl;
}

bool SickKoala::takeDrug(std::string param)
{
	std::string s = param;
	transform(param.begin(), param.end(), s.begin(), ::tolower);
	if ( s == "mars" )
	{
		//std::cout << "Mr. " << this->name << ": Mars, et ca kreog !" << std::endl;
		std::cout << "Mr."<< this->name << ": Mars, et ca Kreog !" << std::endl;
	}

	else if (param == "Buronzand")
	{
		//std::cout << "Mr." << this->name << ": Et la fatigue a fait son temps !" << std::endl;
		std::cout << "Mr." << this->name << ": Et la fatigue a fait son temps !" << std::endl;
	}
	
	else
	{
		//std::cout << "Mr." << this->name << ": Goerkreog !" << std::endl;
		std::cout << "Mr."<< this->name << ": Goerk !" << std::endl;
		return false;
	}
	return true;
}

void SickKoala::overDrive(std::string message)
{
	int position;
	while ((position = message.find("Kreog !")) != int(std::string::npos))
	{
		message.replace(position, 7, "1337 !", 0, 6);
	}
	std::cout << "Mr. " << this->name << ": " << message << std::endl;
}
