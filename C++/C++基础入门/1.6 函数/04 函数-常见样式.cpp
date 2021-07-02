#include<iostream>
using namespace std;

//函数常见样式
//1、无参无返
void test_1()
{
	cout << "This is test_1" << endl;
}

//2、有参无返
void test_2(int a)
{
	cout << "This is test_2 a = " << a << endl;
}

//3、无参有返
int test_3()
{
	cout << "This is test_3" << endl;
	return 1000;
}

//4、有参有返
int test_4(int a)
{
	cout << "This is test_4 a = " << a << endl;
	return a;
}

int main4()
{
	//1、无参无返函数调用
	test_1();

	//2、有参无返函数调用
	test_2(100);

	//3、无参有返函数调用
	int num1 = test_3();
	cout << "num1 = " << num1 << endl;

	//4、有参有返函数调用
	int num2 = test_4(10000);
	cout << "num2 = " << num2 << endl;

	system("pause");

	return 0;
}