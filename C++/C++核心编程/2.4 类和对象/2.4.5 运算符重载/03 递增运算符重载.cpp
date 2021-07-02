#include<iostream>
using namespace std;

//重载递增运算符

//自定义整型
class MyInteger
{
	friend ostream& operator<< (ostream& cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置++运算符
	//返回引用是为了一直对一个数据进行递增
	MyInteger& operator++()
	{
		//先进行++运算
		m_Num++;
		//再将自身做返回
		return *this;
	}

	//重载后置++运算符
	//void operator++(int) int代表占位参数，可以用于区分前置和后置递增
	MyInteger operator++(int)
	{
		//先 记录当时结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		//最后将记录结果做返回
		return temp;
	}

private:
	int m_Num;
};

//只能利用全局函数重载左移运算符
ostream& operator<< (ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test_33()
{
	MyInteger myint;

	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test_44()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

int main3()
{
	//test_33();

	test_44();

	//int a = 0;
	//cout << ++(++a) << endl;
	//cout << a << endl;

	system("pause");

	return 0;
}