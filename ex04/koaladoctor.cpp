#include <iostream>
#include <fstream>
#include "sickkoala.h"
#include "koaladoctor.h"
KoalaDoctor::KoalaDoctor(std::string name)
{
	name = name;
	work_flag = 0;
	std::cout << "Dr." << name << ": Je suis le Dr." << name << " ! Comment Kreoggez-vous ?" <<std::endl;
}
void KoalaDoctor::diagnose(SickKoala *patient)
{
	std::string drug[5] = { "mars" , "Buronzand" , "Viagra" , "Extasy" , "Feuille d'eucalyptus" };
	std::string patient_name = patient->getName();
	std::ofstream my_stream((patient_name + ".report").c_str());
	std::cout << "Dr." << name << ": Alors qu’est-ce qui vous goerk Mr." << patient_name <<" ?" << std::endl;
	patient->poke();
	if(my_stream)
	{
		my_stream << drug[random() % 5];
	}
}
void KoalaDoctor::timeCheck()
{
	if(work_flag == 0)
	{
		std::cout << "Dr." << name << ": Je commence le travail !" << std::endl;
		work_flag = 1;
	}
	if(work_flag == 1)
	{
		std::cout << "Dr." << name << ": Je rentre dans ma foret d’eucalyptus " << std::endl;
		work_flag = 0;
	}
}
