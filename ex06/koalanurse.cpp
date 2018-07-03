#include <fstream>
#include "koalanurse.h"
#include "sickkoala.h"

KoalaNurse:: KoalaNurse(int ID) {
	this->ID = ID;
	this->isWorking=false;
}

KoalaNurse::~KoalaNurse() {
	std::cout << "Nurse "<< this->ID << ": Enfin un peu de repos !" << std::endl;
}

void KoalaNurse :: giveDrug(std::string Drug, SickKoala *Koala)
{
	Koala->takeDrug(Drug);
}

std::string KoalaNurse :: readReport(std::string filename)
{
	std::ifstream in_stream(filename);
	std::string Drugs;
	std::size_t pos = filename.find(".report");
	std::string patientName = filename.substr(0, pos);

	if (in_stream.fail()) {
		Drugs = "";
	} else {
		std::string line;

		while (std::getline(in_stream, line)) {
			Drugs += line;
		}
	}
	std::cout << "Nurse " << this->ID <<": Kreog ! Il faut donner un " << Drugs << " a Mr." << patientName << " !" << std::endl;
	return (Drugs);
}

void KoalaNurse :: timeCheck()
{
	if (this->isWorking == false) {
		std::cout << "Nurse "<< this->ID << ": Je commence le travail !" << std::endl;
		this->isWorking = true;
	} else {
		std::cout << "Nurse "<< this->ID << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
		this->isWorking = false;
	}
}

int KoalaNurse::getID()
{
	return (this->ID);
}
