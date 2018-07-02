#include <iostream>
#include <string>
#include "sickkoala.h"
using namespace std;

SickKoala::SickKoala(string n)
{
	name = n;
}
SickKoala::~SickKoala()
{
	cout << "Mr."<< name << ": Kreooogg !! Je suis gueriiii !";
}
void SickKoala::poke()
{
	cout << "Mr." << name << ": Gooeeeeerrk !! :’(";
}
bool SickKoala::takeDrug(string n)
{
	if((n == "mars") || (n == "Buronzand"))
	{
		if(n == "mars")
		{
			cout << "Mr." << name << ": Mars, et ca kreog !";
		}
		if(n == "Buronzand")
		{
			cout << "Mr." << name << ": Et la fatigue a fait son temps ";
		}	
		return true;
	}
	else
	{	
		cout << "Mr." << name << ": Goerkreog !";
		return false;
	}
	
}
void SickKoala::overDrive(string n)
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
	cout << "Mr." << name <<": " << n;
}
