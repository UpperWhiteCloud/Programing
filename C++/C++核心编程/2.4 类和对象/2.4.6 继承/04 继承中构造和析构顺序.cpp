#include<iostream>
using namespace std;

//�̳��й��������˳��
class Base0
{
public:
	Base0()
	{
		cout << "Base0���캯����" << endl;
	}
	~Base0()
	{
		cout << "Base0����������" << endl;
	}
};

class Son : public Base0
{
public:
	Son()
	{
		cout << "Son���캯����" << endl;
	}
	~Son()
	{
		cout << "Son����������" << endl;
	}
};

void test_11()
{
	//Base0 b0;

	//�̳��еĹ��������˳�����£�
	//�ȹ��츸�࣬�ٹ������࣬������˳���빹���˳���෴
	Son s;
}

int main4()
{
	test_11();

	system("pause");

	return 0;
}