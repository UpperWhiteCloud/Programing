#include<iostream>
using namespace std;

//�̳���ͬ����Ա����
class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base - func()����" << endl;
	}

	void func(int a)
	{
		cout << "Base - func(int a)����" << endl;
	}

	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son - func()����" << endl;
	}

	int m_A;
};

//ͬ����Ա���Դ���
void test_111()
{
	Son s;
	cout << "Son �� m_A = " << s.m_A << endl;
	//���ͨ���������� ���ʵ�������ͬ����Ա����Ҫ��������
	cout << "Son �� m_A = " << s.Base::m_A << endl;
}

//ͬ����Ա��������
void test_222()
{
	Son s1;
	s1.func();//ֱ�ӵ��� ���õ��������е�ͬ����Ա

	s1.Base::func();

	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
	s1.Base::func(100);
}

int main5()
{
	//test_111();

	test_222();

	system("pause");

	return 0;
}