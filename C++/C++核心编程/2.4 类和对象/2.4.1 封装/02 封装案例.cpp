#include<iostream>
using namespace std;
#include<string>

//���һ��ѧ���࣬������������ѧ�ţ�
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

//���ѧ����
class Student
{
public://����Ȩ��

	//���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
	//���� = ��Ա����/��Ա����
	//��Ϊ = ��Ա����/��Ա����

	//����
	string m_name;//����
	int m_id;//ѧ��

	//��Ϊ
	//��ʾ������ѧ��
	void showStudent()
	{
		cout << "������" << m_name << "   " << "ѧ�ţ�" << m_id << endl;
	}

	//��������ֵ
	void setName(string name)
	{
		m_name = name;
	}

	//��ѧ�Ÿ�ֵ
	void setId(int id)
	{
		m_id = id;
	}
};

int main2()
{
	//����һ������ѧ��  ʵ��������
	Student s1;
	//��s1���� �������Ը�ֵ����
	//s1.m_name = "����";
	s1.setName("����");
	//s1.m_id = 10086;
	s1.setId(10086);
	//��ʾѧ����Ϣ
	s1.showStudent();

	Student s2;
	s2.m_name = "����";
	s2.m_id = 10000;
	s2.showStudent();

	system("pause");

	return 0;
}