#include<iostream>
using namespace std;
#include<fstream>

//�������ļ�  д�ļ�
class Person
{
public:
	char m_Name[64];//����
	int m_Age;//����
};

void test_3()
{
	//1������ͷ�ļ�<fstream>

	//2������������
	ofstream ofs("person.txt", ios::out | ios::binary);

	//3�����ļ�
	//ofs.open("person.txt", ios::out | ios::binary);

	//4��д����
	Person p = { "����",18 };
	ofs.write((const char*)&p,sizeof(Person));

	//5���ر��ļ�
	ofs.close();
}

int main3()
{
	test_3();

	system("pause");

	return 0;
}