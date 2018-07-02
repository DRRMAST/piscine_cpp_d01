#ifndef KOALANURSE_H
#define KOALANURSE_H
#include <iostream>
#include "sickkoala.h"
class KoalaNurse
{
	public:
		KoalaNurse(int id);
		~KoalaNurse();
		void giveDrug(std::string drug,SickKoala *patient);
		std::string readReport(std::string report);
		void timeCheck();
	private:
		int ID;
		int work_flag;
};
#endif
