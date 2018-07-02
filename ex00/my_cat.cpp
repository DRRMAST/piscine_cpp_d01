#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>
#include <string>
void readFile(std::string file)
{
	std::ifstream in(file);
	if(!in)
	{
		std::cout << "my_cat: " << file << ": No such file or directory";
		return;
	}
	std::ostringstream tmp;
	tmp << in.rdbuf();
	std::string str = tmp.str();
	std::cout << str;
}
int main(int argc ,char **argv)
{
	if(argc == 1)
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
