#include<iostream>
using namespace std;
#include<string>

//����ѧ���ṹ��
struct student 
{
	int age;      //����
	string name;  //����
	int score;    //����
};

//������ʦ�ṹ��
struct teacher
{
	int id;      //��ʦ���
	string name; //��ʦ����
	int age;     //����
	struct student stu;  //������ѧ��
};

int main4()
{
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "�";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦ������" << t.name
		<< " ��ʦ��ţ�" << t.id
		<< " ��ʦ���䣺" << t.age
		<< " ��ʦ������ѧ��������" << t.stu.name
		<< " ��ʦ������ѧ�����䣺 " << t.stu.age
		<< " ��ʦ������ѧ�������� " << t.stu.score 
		<< endl;

	system("pause");

	return 0;
}