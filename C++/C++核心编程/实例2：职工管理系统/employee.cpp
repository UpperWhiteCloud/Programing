#include "employee.h"

//���캯��
Employee::Employee(int id, string name, int dept_id)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Dep_Id = dept_id;
}

//��ʾ������Ϣ
void Employee::ShowInformation()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDept_Name()
		<< "\t��λְ����ɾ�����������" << endl;
}

//��ȡ��λ��Ϣ
string Employee::getDept_Name()
{
	return string("Ա��");
}