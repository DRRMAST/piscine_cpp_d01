#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
void readTxt(std::string file)
{
    ifstream infile; 
    infile.open(file.data());
	if(infile.is_open() == 0)
	{
		cout << "my_cat: " << file.data() << ": No such file or directory" << endl;
		return;
	}
    string s;
    while(getline(infile,s))
    {
        cout<<s<<endl;
    }
    infile.close();
}
int main(int argc ,char **argv)
{
	if(argc == 1)
	{
		cout << "my_cat: Usage : ./my_cat file [...]" << endl;
		return 0;
	}
	int i = 1;
	std::string f;
	while(i < argc)
	{
		f = argv[i];
		readTxt(f);
		i++;
	}
	return 0 ;
}
