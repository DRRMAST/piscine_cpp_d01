#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>
#include <string>
void readFile(std::string file)
{
	std::ifstream my_stream;
	std::string	buff;
	my_stream.open(file);
	if(my_stream)
	{
		while (getline(my_stream, buff, '\0'))
		std::cout << buff;
		my_stream.close();
	}
	else
		std::cerr << "my_cat: " << file << ": No such file or directory" << std::endl;
}
int main(int argc ,char **argv)
{
	if(argc < 2)
	{
		std::cout << "my_cat: Usage : ./my_cat file [...]";
		return 0;
	}
	int i = 1;
	std::string f;
	while(i < argc)
	{
		f = argv[i];
		readFile(f);
		i++;
	}
	return 0 ;
}
