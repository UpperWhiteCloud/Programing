#include<iostream>
using namespace std;

//��������

//1��ֵ����
void swap_1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap_1 a = " << a << endl;
	cout << "swap_2 b = " << b << endl;
}

//2����ַ����
void swap_2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3�����ô���
void swap_3(int  &a, int  &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main3()
{
	int a = 10;
	int b = 20;

	//swap_1(a, b);//ֵ���ݣ��ββ�������ʵ��

	//swap_2(&a, &b);//��ַ���ݣ��βλ�����ʵ��

	swap_3(a, b);//���ô��ݣ��βλ�����ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}