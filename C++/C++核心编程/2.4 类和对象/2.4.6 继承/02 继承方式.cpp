#include<iostream>
using namespace std;

//�̳з�ʽ

//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1
{
public:
	void func()
	{
		m_A = 10;//����Ĺ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_B = 10;//����ı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C = 10;//�����˽��Ȩ�޳�Ա ������ʲ���
	}
};

void test_2()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//��Son1�� m_B�Ǳ���Ȩ�� ������ʲ���
}

//�����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2
{
public:
	void func()
	{
		m_A = 10;//����Ĺ�����Ա �������Ϊ����Ȩ��
		m_B = 10;//����ı�����Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C = 10;//������˽�� ������ʲ���
	}
};

void test_3()
{
	Son2 s2;
	//s2.m_A = 1000;//��Son2�� m_A�Ǳ���Ȩ�� ������ʲ���
	//s2.m_B = 1000;//��Son2�� m_B�Ǳ���Ȩ�� ������ʲ���
}

//˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 : private Base3
{
public:
	void func()
	{
		m_A = 10;//����Ĺ�����Ա �������Ϊ˽�г�Ա
		m_B = 10;//����ı�����Ա �������Ϊ˽�г�Ա
		//m_C = 10;//������˽�� ������ʲ���
	}
};

class GrandSon3 : public Son3
{
public:
	void func()
	{
		//m_A = 100000;//����Son3�� m_A��Ϊ˽�У���ʹ�Ƕ��ӣ�Ҳ���ʲ���
		//m_B = 100000;//����Son3�� m_B��Ϊ˽�У���ʹ�Ƕ��ӣ�Ҳ���ʲ���
	}
};

void test_4()
{
	Son3 s3;
	//s3.m_A = 10000;//��Son3�� m_A��˽�г�Ա ������ʲ���
	//s3.m_B = 10000;//��Son3�� m_B��˽�г�Ա ������ʲ���
}

int main3()
{


	system("pause");

	return 0;
}