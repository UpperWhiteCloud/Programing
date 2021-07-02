#include<iostream>
using namespace std;

//���ص��������

//�Զ�������
class MyInteger
{
	friend ostream& operator<< (ostream& cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//����ǰ��++�����
	//����������Ϊ��һֱ��һ�����ݽ��е���
	MyInteger& operator++()
	{
		//�Ƚ���++����
		m_Num++;
		//�ٽ�����������
		return *this;
	}

	//���غ���++�����
	//void operator++(int) int����ռλ������������������ǰ�úͺ��õ���
	MyInteger operator++(int)
	{
		//�� ��¼��ʱ���
		MyInteger temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼���������
		return temp;
	}

private:
	int m_Num;
};

//ֻ������ȫ�ֺ����������������
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