//��ͨԱ���ļ�
#pragma once
#include<iostream>
using namespace std;
#include "Worker.h"

class Employee : public Worker
{
public:
	//���캯��
	Employee(int id,string name,int dept_id);

	//��ʾ������Ϣ
	virtual void ShowInformation();

	//��ȡ��λ��Ϣ
	virtual string getDept_Name();
};