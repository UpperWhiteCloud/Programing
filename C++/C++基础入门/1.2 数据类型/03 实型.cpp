#include<iostream>
using namespace std;

int main2()
{

	//������ float
	//˫���� double
	//Ĭ������£����һ����������ʾ��6λ��Ч����

	float f1 = 3.1415926f;

	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1=" << d1 << endl;

	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(f1) << endl;   //4�ֽ�
	cout << "doubleռ���ڴ�ռ�Ϊ��" << sizeof(d1) << endl;  //8�ֽ�

	//��ѧ������
	float f2 = 3e2; //3 * 10 ^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2; //3 * 0.1 ^2
	cout << "f2=" << f3 << endl;

	system("pause");

	return 0;
}