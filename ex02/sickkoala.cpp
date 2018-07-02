#include <iostream>
#include <string>
#include "sickkoala.h"

SickKoala::SickKoala(std::string n)
{
	name = n;
}
SickKoala::~SickKoala()
{
	std::cout << "Mr."<< name << ": Kreooogg !! Je suis gueriiii !";
}
void SickKoala::poke()
{
	std::cout << "Mr." << name << ": Gooeeeeerrk !! :’(";
}
bool SickKoala::takeDrug(std::string n)
{
	if((n == "mars") || (n == "Buronzand"))
	{
		if(n == "mars")
		{
			std::cout << "Mr." << name << ": Mars, et ca kreog !";
		}
		if(n == "Buronzand")
		{
			std::cout << "Mr." << name << ": Et la fatigue a fait son temps ";
		}	
		return true;
	}
	else
	{	
		std::cout << "Mr." << name << ": Goerkreog !";
		return false;
	}
	
}
void SickKoala::overDrive(std::string n)
{
	
	int begin = 0,i = 0;
	while(n[i] != 0)
	{
		if(n.compare(i,5,"Kreog") == 0)
		{
				n.replace(i,5,"1337");
				i++;
				continue;
		}
		i++;
	}
	std::cout << "Mr." << name <<": " << n;
}
