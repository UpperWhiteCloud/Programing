#include<iostream>
using namespace std;

//��̳��﷨

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

//����  ��Ҫ�̳�Base_1��Base_2
//�﷨��class ���� : �̳з�ʽ ����1���̳з�ʽ ����2 ...
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
	//�������г���ͬ����Ա����Ҫ������������
	cout << "Base::m_A = " << s.Base_1::m_A << endl;
	cout << "Base::m_A = " << s.Base_2::m_A << endl;
}

int main7()
{
	test_1111();

	system("pause");

	return 0;
}