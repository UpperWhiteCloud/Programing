#include<iostream>
using namespace std;
#include<string>

//类对象作为类成员

//手机的类
class Phone
{
public:
	Phone(string phone_Name)
	{
		cout << "Phone的构造函数调用" << endl;
		m_phone_Name = phone_Name;
	}

	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}

	//手机品牌名称
	string m_phone_Name;
};

//人的类
class Person
{
public:
	//Phone m_Phone = phone_Name  隐式转换法
	Person(string name, string phone_Name) : m_Name(name), m_Phone(phone_Name)
	{
		cout << "Person的构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
};

//当其他类对象作为本类成员，构造时先构造其他类对象，再构造自身,析构的顺序与构造相反

void test_011()
{
	Person p("张三", "华为 P40");

	cout << p.m_Name << "拿着： " << p.m_Phone.m_phone_Name << endl;
}

int main7()
{
	test_011();

	system("pause");

	return 0;
}