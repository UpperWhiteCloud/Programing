#include<iostream>
using namespace std;

//��ָ����ó�Ա����

class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		//����һ�δ��룬��ֹ����
		if (this == NULL)
		{
			return;
		}
		//�����ԭ������Ϊ�����ָ��ΪNULL
		cout << "age = " << this->m_Age << endl;
	}

	int m_Age;
};

void test_33()
{
	Person* p = NULL;

	p->showClassName();

	p->showPersonAge();
}

int main3()
{
	test_33();

	system("pause");


	return 0;
}