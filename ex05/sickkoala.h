#ifndef SICKKOALA_H
#define SICKKOALA_H
#include <iostream>
class SickKoala
{
	public:
		SickKoala(std::string n);
		~SickKoala();
		std::string getName();
		void poke();
		bool takeDrug(std::string n);
		void overDrive(std::string n);
	private:
		std::string name;
};
#endif
