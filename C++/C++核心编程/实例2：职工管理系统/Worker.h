#pragma once
#include<iostream>
using namespace std;
#include<string>

//ְ��������
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void ShowInformation() = 0;

	//��ȡ��λ��Ϣ
	virtual string getDept_Name() = 0;

	//ְ�����
	int m_Id = 0;
	//ְ������
	string m_Name;
	//���ű��
	int m_Dep_Id = 0;
};