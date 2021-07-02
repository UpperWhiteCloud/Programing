#include<iostream>
using namespace std;

//继承中构造和析构顺序
class Base0
{
public:
	Base0()
	{
		cout << "Base0构造函数！" << endl;
	}
	~Base0()
	{
		cout << "Base0析构函数！" << endl;
	}
};

class Son : public Base0
{
public:
	Son()
	{
		cout << "Son构造函数！" << endl;
	}
	~Son()
	{
		cout << "Son析构函数！" << endl;
	}
};

void test_11()
{
	//Base0 b0;

	//继承中的构造和析构顺序如下：
	//先构造父类，再构造子类，析构的顺序与构造的顺序相反
	Son s;
}

int main4()
{
	test_11();

	system("pause");

	return 0;
}