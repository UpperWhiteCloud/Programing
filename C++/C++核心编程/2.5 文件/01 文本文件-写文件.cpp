#include<iostream>
using namespace std;
#include<fstream>//ͷ�ļ�����

//�ı��ļ� д�ļ�

void test_1()
{
	//1������ͷ�ļ�<fstream>

	//2������������
	ofstream ofs;

	//3��ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);

	//4��д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;

	//5���ر��ļ�
	ofs.close();
}

int main1()
{
	test_1();

	system("pause");

	return 0;
}