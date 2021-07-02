#include<iostream>
using namespace std;

//交换函数

//1、值传递
void swap_1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap_1 a = " << a << endl;
	cout << "swap_2 b = " << b << endl;
}

//2、地址传递
void swap_2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3、引用传递
void swap_3(int  &a, int  &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main3()
{
	int a = 10;
	int b = 20;

	//swap_1(a, b);//值传递，形参不会修饰实参

	//swap_2(&a, &b);//地址传递，形参会修饰实参

	swap_3(a, b);//引用传递，形参会修饰实参

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}