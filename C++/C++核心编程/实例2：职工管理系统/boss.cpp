#include "boss.h"

//���캯��
Boss::Boss(int id, string name, int dept_id)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Dep_Id = dept_id;
}

//��ʾ������Ϣ
void Boss::ShowInformation()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDept_Name()
		<< "\t��λְ�𣺹���˾��������" << endl;
}

//��ȡ��λ��Ϣ
string Boss::getDept_Name()
{
	return string("�ϰ�");
}