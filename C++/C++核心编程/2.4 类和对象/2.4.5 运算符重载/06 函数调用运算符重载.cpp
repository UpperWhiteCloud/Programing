#include<iostream>
using namespace std;
#include<string>

//函数调用运算符重载

//打印输出类
class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint1(string test)
{
	cout << test << endl;
}

void test_88()
{
	MyPrint myprint;

	myprint("Hello World!");//由于使用起来非常类似于函数调用，因此称为仿函数

	MyPrint1("Hello World!");
}

//仿函数非常灵活，没有固定的写法
//加法类
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test_99()
{
	MyAdd myadd;
	int result = myadd(100, 100);
	cout << "result = " << result << endl;

	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;
}

int main()
{
	test_88();

	test_99();

	system("pause");

	return 0;
}