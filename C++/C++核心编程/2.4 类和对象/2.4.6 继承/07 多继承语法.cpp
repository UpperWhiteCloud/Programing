#include<iostream>
using namespace std;

//多继承语法

class Base_1
{
public:
	Base_1()
	{
		m_A = 100;
	}

	int m_A;
};

class Base_2
{
public:
	Base_2()
	{
		m_A = 200;
	}

	int m_A;
};

//子类  需要继承Base_1和Base_2
//语法：class 子类 : 继承方式 父类1，继承方式 父类2 ...
class Son : public Base_1, public Base_2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}

	int m_C;
	int m_D;
};

void test_1111()
{
	Son s;
	cout << "sizeof Son = " << sizeof(Son) << endl;
	//当父类中出现同名成员，需要加作用域区分
	cout << "Base::m_A = " << s.Base_1::m_A << endl;
	cout << "Base::m_A = " << s.Base_2::m_A << endl;
}

int main7()
{
	test_1111();

	system("pause");

	return 0;
}