#include <iostream>
#include <iomanip>
int main()
{
	float in;
	float re;
	std::string type;
	std::cin >> in >> type;
	if(type == "Fahrenheit")
	{
		re = 5.000 / 9.000 * ( in - 32.000 );
		std::cout << std::setiosflags(std::ios::right) << std::setw(16) << std::setprecision(3) << std::fixed << re << std::setiosflags(std::ios::right) << std::setw(16) << "Celsius" ;
	}
	if(type == "Celsius")
	{
		re = ((9.000 * in) / 5.000) + 32.000;
		std::cout << std::setiosflags(std::ios::right) << std::setw(16) << std::setprecision(3) << std::fixed << re << std::setiosflags(std::ios::right) << std::setw(16) << "Fahrenheit" ;
	}
	return 0 ;
}
