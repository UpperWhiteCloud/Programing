#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		//thisָ��ָ�� �����õĳ�Ա���� �����Ķ���
		this->age = age;
	}

	Person& PersonAddAge(Person &p)
	{
		this->age += p.age;

		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
		return *this;
	}

	int age;
};

//1��������Ƴ�ͻ
void test_01()
{
	Person p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}

//2�����ض�������*this
void test_02()
{
	Person p1(10);

	Person p2(10);

	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2������Ϊ��" << p2.age << endl;
}

int main2()
{
	//test_01();

	test_02();

	system("pause");

	return 0;
}