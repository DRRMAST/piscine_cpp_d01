#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;
void readTxt(string file)
{
    ifstream infile; 
    infile.open(file.data());   //将文件流对象与文件连接起来 
    //assert(infile.is_open());   //若失败,则输出错误消息,并终止程序运行 
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
    infile.close();             //关闭文件输入流 
}
int main(int argc ,char **argv)
{
	if(argc == 1)
	{
		cout << "my_cat: Usage : ./my_cat file [...]" << endl;
		return 0;
	}
	int i = 1;
	string f;
	while(i < argc)
	{
		f = argv[i];
		readTxt(f);
		i++;
	}
	return 0 ;
}
