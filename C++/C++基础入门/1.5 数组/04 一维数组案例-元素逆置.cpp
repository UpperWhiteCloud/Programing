#include<iostream>
using namespace std;

int main4()
{
	//ʵ������Ԫ������

	//1����������
	int arr[5] = { 1,3,2,5,4 };
	cout << "��������ǰ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//2��ʵ������
	//2.1��¼��ʼ�±�λ��
	int start = 0;

	//2.2��¼�����±�λ��
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	//2.3��ʼ�±�������±��Ԫ�ػ���
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//2.4��ʼλ��++ ����λ��--
		start++;//start = start + 1
		end--;//end = end - 1
	}
	
	//2.5ѭ��ִ��2.1������ֱ����ʼλ�� >= ����λ��

	//3����ӡ���ú������
	cout << "�������ú�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");

	return 0;
}