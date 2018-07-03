#include <iostream>
#include <fstream>
#include "koalanurse.h"
#include "sickkoala.h"
KoalaNurse::KoalaNurse(int id)
{
	ID = id;
	work_flag = 0;
}
KoalaNurse::~KoalaNurse()
{
	std::cout << "Nurse " << ID << ": Enfin un peu de repos !" << std::endl;
}
void KoalaNurse::giveDrug(std::string drug,SickKoala *patient)
{
	patient->takeDrug(drug);
}
std::string KoalaNurse::readReport(std::string report)
{
	std::ifstream myStream(report.c_str());
	std::string	drug("");
	std::string	patient;
	if(myStream)
	{
		patient = report.substr(0, report.rfind(".report"));
		getline(myStream, drug);
		std::cout << "Nurse " << this->ID << ": Kreog ! Il faut donner un " << drug << " a Mr." << patient << " !" << std::endl;
	}
	return (drug);
}
void KoalaNurse::timeCheck()
{
	if(work_flag == 0)
	{
		std::cout << "Nurse " << ID << ": Je commence le travail !" << std::endl;
		work_flag = 1;
	}
	else if(work_flag == 1)
	{
		std::cout << "Nurse " << ID << ": Je rentre dans ma foret d'eucalyptus " << std::endl;
		work_flag = 0;
	}
	
}
