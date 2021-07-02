#pragma once
#include<iostream>
using namespace std;
#include<string>

//职工抽象类
class Worker
{
public:
	//显示个人信息
	virtual void ShowInformation() = 0;

	//获取岗位信息
	virtual string getDept_Name() = 0;

	//职工编号
	int m_Id = 0;
	//职工姓名
	string m_Name;
	//部门编号
	int m_Dep_Id = 0;
};