#include<iostream>
using namespace std;

//��̬��Ա����
class Person
{
public:
	//1�����ж��󶼹���ͬһ������
	//2���ڱ���׶η����ڴ�
	//3�����������������ʼ��
	static int m_A;

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static int m_B;
};

int Person::m_A = 100;
int Person::m_B = 200;

void test_111()
{
	Person p;
	//100
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;

	//200
	cout << p.m_A << endl;
}

void test_222()
{
	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ

	//1��ͨ��������з���
	//Person p;
	//cout << p.m_A << endl;

	//2��ͨ���������з���
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;//������ʲ���˽�о�̬������Ա
}

int main8()
{
	//test_111();

	test_222();

	system("pause");

	return 0;
}