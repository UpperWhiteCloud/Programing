#include<iostream>
using namespace std;
#include<string>

//�����������������

//��ӡ�����
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint1(string test)
{
	cout << test << endl;
}

void test_88()
{
	MyPrint myprint;

	myprint("Hello World!");//����ʹ�������ǳ������ں������ã���˳�Ϊ�º���

	MyPrint1("Hello World!");
}

//�º����ǳ���û�й̶���д��
//�ӷ���
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test_99()
{
	MyAdd myadd;
	int result = myadd(100, 100);
	cout << "result = " << result << endl;

	//������������
	cout << MyAdd()(100, 100) << endl;
}

int main()
{
	test_88();

	test_99();

	system("pause");

	return 0;
}