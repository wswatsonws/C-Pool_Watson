#include "sickkoala.h"
#include "koalanurse.h"
#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name)
{
	this->name = name;
	std::cout << "Dr." << name << ": Je suis le Dr."<< name << " ! Comment Kreoggez-vous ?" << std::endl;
	this->work = false;
}

KoalaDoctor::~KoalaDoctor()
{
	this->name.empty();;
}

void	KoalaDoctor::diagnose(SickKoala *SickKoala)
{
	std::string	drug[] = {"mars", "Buronzand", "Viagra", "Extasy", "Feuille d'eucalyptus"};
	std::string	report = SickKoala->getName() + ".report";
	std::ofstream	file(report.c_str(), std::ios::out);


	std::cout << "Dr." << this->name << ": Alors qu'est-ce qui vous goerk Mr." << SickKoala->getName() << " \?" << std::endl;
	SickKoala->poke();
	if (file)
	{
		file << drug[random() % 5] << std::endl;
		file.close();
	}
}

void	KoalaDoctor::timeCheck()
{
	/*if (this->work)
		std::cout << "Dr."<< this->name << ": Je commence le travail !" << std::endl;
	else if (!this->work)
		std::cout << "Dr."<< this->name << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
	this->work = !this->work;*/
	
	if (this->work == false) 
	{
		std::cout << "Dr." << this->name << ": Je commence le travail !" << std::endl;
		this->work = true;
	} 
	else 
	{
		std::cout<< "Dr." << this->name << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
		this->work = false;
	}
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
 }*/
