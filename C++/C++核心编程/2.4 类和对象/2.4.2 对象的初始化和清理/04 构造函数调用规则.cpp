#include<iostream>
using namespace std;

//���캯�����ù���
//1������һ���࣬C++���������ٻ��ÿ���඼�������3������
//Ĭ�Ϲ���    (��ʵ��)
//Ĭ������    (��ʵ��)
//���������  (ֵ����)


//2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
//�������д�˿������캯�����������Ͳ����ṩ������ͨ���캯����
class Person
{
public:
	//Person()
	//{
		//cout << "Person��Ĭ�Ϲ��캯������" << endl;
	//}

	//Person(int age)
	//{
		//cout << "Person���вι��캯������" << endl;
		//m_Age = age;
	//}

	Person(const Person& p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person��Ĭ��������������" << endl;
	}

	int m_Age;
};

//void test001()
//{
	//Person p;
	//p.m_Age = 18;

	//Person p2(p);

	//cout << "p2������Ϊ��" << p2.m_Age << endl;
//}

//void test002()
//{
	//Person p;
//}

int main4()
{
	//test001();

	//test002();

	system("pause");

	return 0;
}