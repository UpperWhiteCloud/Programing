#include<iostream>
using namespace std;

//�����������ķ���ֵ
//1����Ҫ���ؾֲ�����������
int& test1()
{
	int a = 10;//�ֲ���������������е� ջ��
	return a;
}

//�����ĵ��ÿ�����Ϊ��ֵ
int& test2()
{
	static int a = 10;//��̬�����������ȫ������ȫ�����ϵ������ڳ����������ϵͳ�ͷ�
	return a;
}

int main4()
{
	//int& ref = test1();

	//cout << "ref = " << ref << endl;//��һ�ν����ȷ������Ϊ���������˱���
	//cout << "ref = " << ref << endl;//�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�

	int& ref2 = test2();

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test2() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}