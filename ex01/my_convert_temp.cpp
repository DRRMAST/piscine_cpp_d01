#include <iostream>
#include <iomanip>
int main()
{
	float in;
	float re;
	std::string type;
	std::cin >> in >> type;
	std::cout.precision(3);
	if(type == "Fahrenheit")
	{
		std::cout << std::fixed << std::setw(16) << (in - (float)32) / (float)1.8 << std::setw(16) << "Celsius" << std::endl;
	}
	if(type == "Celsius")
	{
		std::cout <<  std::fixed << std::setw(16) << (in  * (float)1.8) + (float)32  << std::setw(16) <<"Fahrenheit" << std::endl;
	}  
	return 0 ;
}
