#include<iostream>
using namespace std;
//����timeϵͳʱ��ͷ�ļ�
#include<ctime>

int main2()
{
	//������������ ���ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	/*
	rand() �������������ÿ�����е�ʱ��������һ����ͬ�ġ�
	��Ҫ��ͬ, �ú��� srand() ��ʼ������
	�������� srand((unsigned int)(time(NULL)) �ķ�����
	������ͬ����������ӣ���Ϊÿһ�����г����ʱ���ǲ�ͬ�ġ�
	*/
	srand((unsigned int)time(NULL));

	//1��ϵͳ���������
	//rand() ��������α������֣�ÿ��ִ��ʱ����ͬ��; ��Ҫ��ͬ, �ú��� srand() ��ʼ������
	int num = rand() % 100 + 1;   //rand() % 100 + 1  ���� 0 + 1~99 + 1�������
	//cout << num << endl;

	//2����ҽ��в²�
	int value = 0;//������������

	while (1)
	{
		cin >> value;

		//3���ж���ҵĲ²�
		//�´�  ��ʾ�µĽ��  ������߹�С  ���·��ص�2��
		if (value > num)
		{
			cout << "�²����" << endl;
		}
		else if (value < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ���µ��ˣ�" << endl;
			//�¶�  �˳���Ϸ
			break;//break���������øùؼ������˳���ǰѭ��
		}
	}

	

	system("pause");

	return 0;
}