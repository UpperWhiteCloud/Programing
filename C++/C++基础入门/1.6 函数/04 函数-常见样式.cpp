#include<iostream>
using namespace std;

//����������ʽ
//1���޲��޷�
void test_1()
{
	cout << "This is test_1" << endl;
}

//2���в��޷�
void test_2(int a)
{
	cout << "This is test_2 a = " << a << endl;
}

//3���޲��з�
int test_3()
{
	cout << "This is test_3" << endl;
	return 1000;
}

//4���в��з�
int test_4(int a)
{
	cout << "This is test_4 a = " << a << endl;
	return a;
}

int main4()
{
	//1���޲��޷���������
	test_1();

	//2���в��޷���������
	test_2(100);

	//3���޲��з���������
	int num1 = test_3();
	cout << "num1 = " << num1 << endl;

	//4���в��з���������
	int num2 = test_4(10000);
	cout << "num2 = " << num2 << endl;

	system("pause");

	return 0;
}