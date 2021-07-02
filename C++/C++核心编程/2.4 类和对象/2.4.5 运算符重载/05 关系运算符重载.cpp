#include<iostream>
using namespace std;
#include<string>

//���ع�ϵ�����

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

	//���� == ��
	bool operator==(Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

	//���� != ��
	bool operator!=(Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return false;
		}
		return true;
	}

	string m_Name;
	int m_Age;
};

void test_66()
{
	Person p1("Tom", 18);
	Person p2("Jerry", 20);

	if (p1 == p2) 
	{
		cout << "p1��p2����ȵģ�" << endl;
	}
	else
	{
		cout << "p1��p2�ǲ���ȵģ�" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1��p2�ǲ���ȵģ�" << endl;
	}
	else
	{
		cout << "p1��p2����ȵģ�" << endl;
	}

}

int main5()
{
	test_66();

	system("pause");

	return 0;
}