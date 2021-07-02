#pragma once
#include<iostream>
using namespace std;
#include "Worker.h"

//老板类
class Boss : public Worker
{
public:
	//构造函数
	Boss(int id, string name, int dept_name);

	//显示个人信息
	virtual void ShowInformation();

	//获取岗位信息
	virtual string getDept_Name();
};