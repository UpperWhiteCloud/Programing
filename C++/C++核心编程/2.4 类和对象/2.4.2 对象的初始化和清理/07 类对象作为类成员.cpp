#include<iostream>
using namespace std;
#include<string>

//�������Ϊ���Ա

//�ֻ�����
class Phone
{
public:
	Phone(string phone_Name)
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_phone_Name = phone_Name;
	}

	~Phone()
	{
		cout << "Phone��������������" << endl;
	}

	//�ֻ�Ʒ������
	string m_phone_Name;
};

//�˵���
class Person
{
public:
	//Phone m_Phone = phone_Name  ��ʽת����
	Person(string name, string phone_Name) : m_Name(name), m_Phone(phone_Name)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}

	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;
};

//�������������Ϊ�����Ա������ʱ�ȹ�������������ٹ�������,������˳���빹���෴

void test_011()
{
	Person p("����", "��Ϊ P40");

	cout << p.m_Name << "���ţ� " << p.m_Phone.m_phone_Name << endl;
}

int main7()
{
	test_011();

	system("pause");

	return 0;
}