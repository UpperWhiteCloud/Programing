#include<iostream>
using namespace std;
#include "WorkerManager.h"

//#include "Worker.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"

int main()
{
	////���Դ���
	//Worker* worker = NULL;
	//worker = new Employee(1, "����",1);
	//worker->ShowInformation();
	//delete worker;

	//worker = new Manager(2, "����",2);
	//worker->ShowInformation();
	//delete worker;

	//worker = new Boss(3, "����",3);
	//worker->ShowInformation();
	//delete worker;

	//ʵ���������߶���                                     //�Ȱ�Ctrl - K ��ϼ�,�ٰ� Ctrl - C ��ϼ�����ע��
	WorkerManager workermanager;                         //�Ȱ�Ctrl - K ��ϼ�,�ٰ� Ctrl - U ��ϼ�����ȡ��ע��
	
	int choice = 0;//�����洢�û���ѡ��
	
	while (true)
	{
		//����չʾ�˵���Ա����
		workermanager.ShowMenu();
	
		cout << "����������ѡ��" << endl;
		cin >> choice;//�����û���ѡ��
	
		switch (choice)
		{
		case 0://�˳�����ϵͳ
			workermanager.ExitSystem();
			break;
		case 1://����ְ����Ϣ
			workermanager.Add_Emp();
			break;
		case 2://��ʾְ����Ϣ
			workermanager.Show_Emp();
			break;
		case 3://ɾ����ְְ��
			workermanager.Del_Emp();
			break;
		//{//����
		//	int ret = workermanager.IsExist(1);
		//	if (ret != -1)
		//	{
		//		cout << "ְ������" << endl;
		//	}
		//	else
		//	{
		//		cout << "ְ��������" << endl;
		//	}
		//	break;
		//}
		case 4://�޸�ְ����Ϣ
			workermanager.Mod_Emp();
			break;
		case 5://����ְ����Ϣ
			workermanager.Find_Emp();
			break;
		case 6://���ձ������
			workermanager.Sort_Emp();
			break;
		case 7://��������ĵ�
			workermanager.Clean_File();
			break;
		default:
			system("cls");//��������
			break;
		}
	}

	system("pause");

	return 0;
}