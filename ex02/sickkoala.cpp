#include <iostream>
#include <string>
#include "sickkoala.h"
using namespace std;

SickKoala::SickKoala(string n)
{
	name = n;
	//cout << "This is " << name << endl;
}
SickKoala::~SickKoala()
{
	//cout << "Mr."<< name << ": Kreooogg !! Je suis gueriiii !";
}
void SickKoala::poke()
{
	cout << "Mr." << name << ": Gooeeeeerrk !! :’(";
}
bool SickKoala::takeDrug(string n)
{
	//if((wcscasecmp(n,"mars") == 0) || (n == "Buronzand"))
	//{
		//if(wcscasecmp(n,"mars") == 0)
		if(n == "mars")
		{
			cout << "Mr." << name << ": Mars, et ca kreog !";
		}
		if(n == "Buronzand")
		{
			cout << "Mr." << name << ": Et la fatigue a fait son temps ";
		}	
		return true;
	//}
	//else
	//{	
		//cout << "Mr." << name << ": Goerkreog !";
		//return false;
	//}
	
}
void SickKoala::overDrive(string n)
{
	/*string k = "Kreog";
	string replace = "1337";
	string::size_type pos = 0;
	string::size_type a = n.size();
	string::size_type b = replace.size();
	while((pos = n.find(k,pos))  != string::npos)
	{
		n.replace(pos,a,replace);
		pos += b;
	}*/
	int begin = 0,i = 0;
	while(n[i] != 0)
	{
		//if(n[i] == 'K')
		//cout << "n:" << n[i];
		if(n.compare(i,5,"Kreog") == 0)
		{
				n.replace(i,5,"1337");
				i++;
				continue;
		}
		i++;
	}
	//n.replace(0,5,"1337");
	cout << "Mr." << name <<": " << n;
}
