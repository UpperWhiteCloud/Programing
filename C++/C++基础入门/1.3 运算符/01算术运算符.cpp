#include<iostream>
using namespace std;

int main1()
{
	//�Ӽ��˳�
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;  //����������������Ȼ����������С������ȥ��

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl;    ��������������������ǲ�����Ϊ0��

	//����С�����
	double d1 = 0.5;
	double d2 = 0.22;

	cout << d1 / d2 << endl;  //����������˵С��

	//ȡģ���㱾�ʾ���ȡ����
	int a4 = 10;
	int b4 = 3;

	cout << a4 % b4 << endl;

	int a5 = 10;
	int b5 = 20;

	cout << a5 % b5 << endl;

	int a6 = 10;
	int b6 = 0;

	//����������������ǲ�����Ϊ0��,����Ҳ������ȡģ����
	//cout << a6 / b6 << endl;

	//����С���ǲ�������ȡģ�����

	//ֻ�����ͱ������Խ���ȡģ����

	double d3 = 3.14;
	double d4 = 1.1;

	//cout << d3 % d4 << endl; 


	//1��ǰ�õ���
	int a = 10;
	++a; //�ñ���+1
	cout << "a = " << a << endl;

	//2�����õ���
	int b = 10;
	b++; //�ñ���+1
	cout << "b = " << a << endl;

	//3��ǰ�õ����ͺ��õ���������
	//ǰ�õ��� ���ñ���+1 Ȼ����б��ʽ����
	int a7 = 10;
	int b7 = ++a7 * 10;
	cout << "a7 = " << a7 << endl;
	cout << "b7 = " << b7 << endl;
	//���õ��� �Ƚ��б��ʽ���� ���ñ���+1
	int a8 = 10;
	int b8 = a8++ * 10;
	cout << "a8 = " << a8 << endl;
	cout << "b8 = " << b8 << endl;

	system("pause");

	return 0;
}