#include<iostream>
using namespace std;

//�̳��еĶ���ģ��

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base
{
public:
	int m_D;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷� F:
//��ת�ļ�·�� cd ����·����
//  cl /d1 reportSingleClassLayout���� �ļ���

void test_5()
{
	//������˽�еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ��������������ˣ���˷��ʲ���������ȷʵ���̳�����ȥ
	//16���ֽ�
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main3()
{
	test_5();

	system("pause");

	return 0;
}