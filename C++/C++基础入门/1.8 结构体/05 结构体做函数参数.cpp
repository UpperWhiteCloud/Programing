#include<iostream>
using namespace std;
#include<string>

//����ѧ���ṹ��
struct student
{
	int age;     //����
	string name; //����
	int score;   //����
};

//��ӡѧ����Ϣ�ĺ���
//ֵ����
void printStudent1(struct student s)
{
	s.age = 100;
	cout << "�Ӻ���1�д�ӡ ������" << s.name << " ���䣺 " << s.age << " ����:" << s.score << endl;
}

//��ַ����
void printStudent2(struct student * p)
{
	p->age = 200;
	cout << "�Ӻ���2�д�ӡ ������" << p ->name << " ���䣺 " << p ->age << " ����:" << p ->score << endl;
}

int main5()
{
	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ������������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;

	//printStudent1(s);
	printStudent2(&s);
	cout << "main�����д�ӡ ������" << s.name << " ���䣺 " << s.age << " ����:" << s.score << endl;

	system("pause");

	return 0;
}