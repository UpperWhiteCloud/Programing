#include<iostream>
using namespace std;

int main1()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;  //两个数相除，结果依然是整数，将小数部分去除

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl;    错误！两个数相除，除数是不可以为0的

	//两个小数相除
	double d1 = 0.5;
	double d2 = 0.22;

	cout << d1 / d2 << endl;  //运算结果可以说小数

	//取模运算本质就是取余数
	int a4 = 10;
	int b4 = 3;

	cout << a4 % b4 << endl;

	int a5 = 10;
	int b5 = 20;

	cout << a5 % b5 << endl;

	int a6 = 10;
	int b6 = 0;

	//两个数相除，除数是不可以为0的,所以也做不了取模运算
	//cout << a6 / b6 << endl;

	//两个小数是不可以做取模运算的

	//只有整型变量可以进行取模运算

	double d3 = 3.14;
	double d4 = 1.1;

	//cout << d3 % d4 << endl; 


	//1、前置递增
	int a = 10;
	++a; //让变量+1
	cout << "a = " << a << endl;

	//2、后置递增
	int b = 10;
	b++; //让变量+1
	cout << "b = " << a << endl;

	//3、前置递增和后置递增的区别
	//前置递增 先让变量+1 然后进行表达式运算
	int a7 = 10;
	int b7 = ++a7 * 10;
	cout << "a7 = " << a7 << endl;
	cout << "b7 = " << b7 << endl;
	//后置递增 先进行表达式运算 后让变量+1
	int a8 = 10;
	int b8 = a8++ * 10;
	cout << "a8 = " << a8 << endl;
	cout << "b8 = " << b8 << endl;

	system("pause");

	return 0;
}