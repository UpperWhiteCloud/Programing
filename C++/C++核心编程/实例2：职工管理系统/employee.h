//普通员工文件
#pragma once
#include<iostream>
using namespace std;
#include "Worker.h"

class Employee : public Worker
{
public:
	//构造函数
	Employee(int id,string name,int dept_id);

	//显示个人信息
	virtual void ShowInformation();

	//获取岗位信息
	virtual string getDept_Name();
};