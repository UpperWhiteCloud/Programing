#include<iostream>
using namespace std;
#include<string>  //用C++风格字符串时候，要包含这个头文件

int main6()
{
	//1、C风格字符串
	//注意事项  char 字符串名 []
	//注意事项2 等号后面 要用双引号 包含起来字符串
	char str[] = "Hello World!";
	cout << str << endl;

	//2、C++风格字符串
	//包含一个头文件  #include<string>
	string str2 = "Hello World!";
	cout << str2 << endl;

	system("pause");

	return 0;
}