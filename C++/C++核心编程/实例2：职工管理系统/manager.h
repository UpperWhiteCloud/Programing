#pragma once
#include<iostream>
using namespace std;
#include "Worker.h"

//经理类
class Manager : public Worker
{
public:
	//构造函数
	Manager(int id, string name, int dept_name);

	//显示个人信息
	virtual void ShowInformation();

	//获取岗位信息
	virtual string getDept_Name();
};