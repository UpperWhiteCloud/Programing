#include<iostream>
using namespace std;

int main5()
{
	//1. const����ָ��--- ����ָ��
	int a = 10;
	int b = 10;

	const int* p = &a;
	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	//*p = 20;//����
	p = &b;//��ȷ
	 
	//2. const���γ���--- ָ�볣��
	int* const p2 = &a;

	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	*p2 = 100;//��ȷ
	//p2 = &b;//����,ָ���ָ�򲻿��Ը�
	
	//3. const������ָ�룬�����γ���
	const int* const p3 = &a;
	//ָ���ָ���ָ��ָ���ֵ�������Ը�
	//*p3 = 100;//����
	//p3 = &b;//����

	system("pause");

	return 0;
}