#include<iostream>
using namespace std;

//����������
//�ȽϺ�����ʵ���������ͽ��бȽϣ����ؽϴ��ֵ

//��ǰ���߱����������Ĵ��ڣ��������ú���������
//����������
//��������д��Σ����Ƕ���ֻ����һ��
int max(int a, int b);
//int max(int a, int b);
//int max(int a, int b);


int main5()
{
	int a = 10;
	int b = 20;
	
	cout << max(a, b) <<endl;

	system("pause");

	return 0;
}

//���庯��
int max(int a, int b)
{
	return a > b ? a : b;
}

//�����Ǵ���ģ�����ֻ����һ��
//���庯��
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}