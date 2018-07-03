#include <iostream>
#include <fstream>
#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name)
{
	this->name = name;
	this->isWorking = false;
	//std::cout<<"Dr." << this->name << ": I'm Dr." << this->name <<" ! Comment Kreoggez-vous ?";
	std::cout << "Dr." << this->name << ": Je suis le Dr."<< this->name << " ! Comment Kreoggez-vous ?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{

}

void KoalaDoctor::diagnose(SickKoala *koala)
{
	std::string filename = koala->getName() + ".report";
	std::cout<<"Dr."<< this->name << ": Alors qu'est-ce qui vous goerk Mr."  << koala->name<< " \?" << std::endl;
	koala->poke();
	std::ofstream outfile (filename, std::ofstream::out);
	std::string tab[5] = {"mars", "Buronzand", "Viagra", "Extasy", "Eucalyptus leaf"};
	outfile << tab[rand()%5] << std::endl;
}

void KoalaDoctor::timeCheck()
{
	if (this->isWorking == false) {
		std::cout << "Dr." << this->name << ": Je commence le travail !" << std::endl;
		this->isWorking = true;
	} else {
		std::cout<< "Dr." << this->name << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
		this->isWorking = false;
	}
}

std::string KoalaDoctor::getName()
{
	return (this->name);
}
/*
int main()
{
	KoalaNurse    KoalaNurse(194) ;
	SickKoala     SickKoala("Koko");
	KoalaDoctor	KoalaDoctor("House");

	KoalaDoctor.diagnose(&SickKoala);
	KoalaDoctor.timeCheck();
	return 0;
}
*/
