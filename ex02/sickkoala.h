#ifndef SICKKOALA_H
#define SICKKOALA_H
#include <iostream>
using namespace std;
class SickKoala
{
	public:
		SickKoala(string n);
		~SickKoala();
		void poke();
		bool takeDrug(string n);
		void overDrive(string n);
	private:
		string name;
};
#endif
