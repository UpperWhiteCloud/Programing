#pragma once
#include<iostream>
using namespace std;
#include "Worker.h"

//�ϰ���
class Boss : public Worker
{
public:
	//���캯��
	Boss(int id, string name, int dept_name);

	//��ʾ������Ϣ
	virtual void ShowInformation();

	//��ȡ��λ��Ϣ
	virtual string getDept_Name();
};