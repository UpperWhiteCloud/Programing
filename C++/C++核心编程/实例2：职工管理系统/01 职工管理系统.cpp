#include<iostream>
using namespace std;
#include "WorkerManager.h"

//#include "Worker.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"

int main()
{
	////测试代码
	//Worker* worker = NULL;
	//worker = new Employee(1, "张三",1);
	//worker->ShowInformation();
	//delete worker;

	//worker = new Manager(2, "李四",2);
	//worker->ShowInformation();
	//delete worker;

	//worker = new Boss(3, "王五",3);
	//worker->ShowInformation();
	//delete worker;

	//实例化管理者对象                                     
	WorkerManager workermanager;                         
	
	int choice = 0;//用来存储用户的选项
	
	while (true)
	{
		//调用展示菜单成员函数
		workermanager.ShowMenu();
	
		cout << "请输入您的选择：" << endl;
		cin >> choice;//接收用户的选项
	
		switch (choice)
		{
		case 0://退出管理系统
			workermanager.ExitSystem();
			break;
		case 1://增加职工信息
			workermanager.Add_Emp();
			break;
		case 2://显示职工信息
			workermanager.Show_Emp();
			break;
		case 3://删除离职职工
			workermanager.Del_Emp();
			break;
		//{//测试
		//	int ret = workermanager.IsExist(1);
		//	if (ret != -1)
		//	{
		//		cout << "职工存在" << endl;
		//	}
		//	else
		//	{
		//		cout << "职工不存在" << endl;
		//	}
		//	break;
		//}
		case 4://修改职工信息
			workermanager.Mod_Emp();
			break;
		case 5://查找职工信息
			workermanager.Find_Emp();
			break;
		case 6://按照编号排序
			workermanager.Sort_Emp();
			break;
		case 7://清空所有文档
			workermanager.Clean_File();
			break;
		default:
			system("cls");//清屏操作
			break;
		}
	}

	system("pause");

	return 0;
}
