#include<iostream>
using namespace std;

//继承中的同名静态成员处理方式

class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()调用" << endl;
	}

	static void func(int a)
	{
		cout << "Base - static void func(int a)调用" << endl;
	}
};
int Base::m_A = 100;

class Son : public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()调用" << endl;
	}
};
int Son::m_A = 100;

//同名静态成员属性
void test_555()
{
	//1、通过对象访问
	cout << "通过对象访问：" << endl;
	Son s;
	cout << "Son 下 m_A = " << s.m_A << endl;
	cout << "Base 下 m_A = " << s.Base::m_A << endl;

	//2、通过类名访问
	cout << "通过类名访问：" << endl;
	cout << "Son 下 m_A = " << Son::m_A << endl;
	//第一个::代表通过类名方式访问 第二个::代表访问父类作用域下
	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
}

//同名静态成员函数
void  test_666()
{
	//1、通过对象访问
	cout << "通过对象访问：" << endl;
	Son s;
	s.func();
	s.Base::func();

	//2、通过类名访问
	cout << "通过类名访问：" << endl;
	Son::func();
	Son::Base::func();

	//如果子类中出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
	//如果想访问父类中被隐藏同名成员，需要加作用域
	Son::Base::func(100);
}

int main6()
{
	//test_555();

	test_666();

	system("pause");

	return 0;
}