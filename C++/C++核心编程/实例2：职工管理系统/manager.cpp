#include "manager.h"

//���캯��
Manager::Manager(int id, string name, int dept_id)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Dep_Id = dept_id;
}

//��ʾ������Ϣ
void Manager::ShowInformation()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDept_Name()
		<< "\t��λְ������ϰ彻�������񣬲��·������Ա��" << endl;
}

//��ȡ��λ��Ϣ
string Manager::getDept_Name()
{
	return string("����");
}