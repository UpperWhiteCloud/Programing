#include "employee.h"

//构造函数
Employee::Employee(int id, string name, int dept_id)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Dep_Id = dept_id;
}

//显示个人信息
void Employee::ShowInformation()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDept_Name()
		<< "\t岗位职责：完成经理交给的任务" << endl;
}

//获取岗位信息
string Employee::getDept_Name()
{
	return string("员工");
}