#include<iostream>
using namespace std;

//��̬

//������
class Animal
{
public:
	//�麯��								//vfptr - �麯��(��)ָ��
	virtual void speak()					//v - virtual
	{										//f - function
		cout << "������˵��" << endl;		//ptr- pointer
	}
};											//vftable - �麯����
											//v - virtual
//è��										//table - table
class Cat : public Animal
{
public:
	//��д ��������ֵ���� ������ �����б� ��ȫ��ͬ
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//����
class Dog : public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//������ַ���  �ڱ���׶�ȷ��������ַ
//�����ִ����è˵������ô������������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

//��̬��̬����������
//1���м̳й�ϵ
//2��������д������麯��

//��̬��̬ʹ��
//�����ָ��������� ָ���������

void doSpeak(Animal& animal)//Animal &animal = cat;
{
	animal.speak();
}

void test_1()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test_2()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main1()
{
	//test_1();

	test_2();

	system("pause");

	return 0;
}