#pragma once
#include<iostream>
using namespace std;
#include "Worker.h"

//������
class Manager : public Worker
{
public:
	//���캯��
	Manager(int id, string name, int dept_name);

	//��ʾ������Ϣ
	virtual void ShowInformation();

	//��ȡ��λ��Ϣ
	virtual string getDept_Name();
};