#include<iostream>
using namespace std;

//��Ա���� �� ��Ա�����ֿ��洢

class Person
{
	int m_A;//�Ǿ�̬��Ա����  ������Ķ�����

	static int m_B;//��̬��Ա����  ��������Ķ�����

	void func()   //�Ǿ�̬��Ա����  ��������Ķ�����
	{

	}

	static void func2()   //��̬��Ա����  ��������Ķ�����
	{

	}
};
int Person::m_B = 0;

void test_1()
{
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "sizeof p = " << sizeof(p) << endl;
}

void test_2()
{
	Person p;
	cout << "sizeof p = " << sizeof(p) << endl;
}

int main1()
{
	//test_1();

	test_2();

	system("pause");

	return 0;
}