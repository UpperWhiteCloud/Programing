#include<iostream>
using namespace std;

//空指针调用成员函数

class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		//加这一段代码，防止报错
		if (this == NULL)
		{
			return;
		}
		//报错的原因是因为传入的指针为NULL
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