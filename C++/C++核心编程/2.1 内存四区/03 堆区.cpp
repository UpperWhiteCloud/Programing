#include<iostream>
using namespace std;

int* func1()
{
	//利用new关键字  可以将数据开辟到堆区
	//指针 本质也是局部变量，放在栈上，指针保存的数据是放在堆区
	int* p = new int(10);
	return p;
}

int main3()
{
	//堆区开辟数据
	int* p = func1();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}