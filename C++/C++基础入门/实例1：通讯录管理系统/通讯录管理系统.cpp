#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

//设计联系人结构体
struct Person
{
	//姓名
	string m_Name;
	//性别  1 男  2  女
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};

//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person persomArray[MAX];

	//通讯录中当前记录联系人个数
	int m_Size;
};

//1、添加联系人
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否已满，如果满了就不在添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->persomArray[abs->m_Size].m_Name = name;

		//性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;

		while (true)
		{
			//如果输入的是 1 或者 2 可以退出循环，因为输入的是正确值
			//如果输入有误，重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->persomArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入:" << endl;
		}

		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;

		while (true)
		{
			//如果输入的是 大于0 或者 小于150 可以退出循环，因为输入的是正确值
			//如果输入有误，重新输入
			cin >> age;
			if (age > 0 && age < 150)
			{
				abs->persomArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "输入有误，请重新输入:" << endl;
		}

		//电话
		string phone;
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		abs->persomArray[abs->m_Size].m_Phone = phone;

		//地址
		string address;
		cout << "请输入家庭住址：" << endl;
		cin >> address;
		abs->persomArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功！" << endl;

		system("pause");//请按任意键继续
		system("cls"); //清屏操作
	}
}

//2、显示所有联系人
void showPerson(Addressbooks * abs)
{
	//判断通讯录中人数是否为0，如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空！！！" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->persomArray[i].m_Name << "\t";
			cout << "性别：" << (abs->persomArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->persomArray[i].m_Age << "\t";
			cout << "电话：" << abs->persomArray[i].m_Phone << "\t";
			cout << "住址：" << abs->persomArray[i].m_Addr << endl;
		}
	}

	system("pause");//请按任意键继续
	system("cls");//清屏
}

//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
//参数1   通讯录    参数2  对比姓名
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//找到用户输入的姓名了
		if (abs->persomArray[i].m_Name == name)
		{
			return i;//知道了，返回这个人在数组中的下标编号
		}
	}
	return -1;//如果遍历结束都没有找到，返回-1
}

//3、删除指定联系人
void deletePerson(Addressbooks * abs)
{
	cout << "请输入您要删除的联系人：" << endl;
	string name;
	cin >> name;

	//ret == -1   未查到
	//ret != -1   查到了
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//查找到人，要进行删除操作
		for (int i = ret; i < abs->m_Size; i++)
		{
			//数据前移
			abs->persomArray[i] = abs->persomArray[i + 1];
		}
		abs->m_Size--;//更新通讯录中的人员数
		cout << "删除成功！" << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}

	system("pause");//请按任意键继续
	system("cls");//清屏
}

//4、查找指定联系人信息
void findPerson(Addressbooks* abs)
{
	cout << "请输入您要查找的联系人:" << endl;
	string name;
	cin >> name;

	//判断指定的联系人是否存在通讯录中
	int ret = isExist(abs, name);

	if (ret != -1)//找到联系人
	{
		cout << "姓名：" << abs->persomArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->persomArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->persomArray[ret].m_Age << "\t";
		cout << "电话：" << abs->persomArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->persomArray[ret].m_Addr << endl;
	}
	else //未找到联系人
	{
		cout << "查无此人！" << endl;
	}

	system("pause");//请按任意键继续
	system("cls");//清屏
}

//5、修改指定联系人信息
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入您要修改的联系人:" << endl;
	string name;
	cin >> name;

	//判断指定的联系人是否存在通讯录中
	int ret = isExist(abs, name);

	if (ret != -1)//找到指定联系人
	{
		//姓名
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->persomArray[ret].m_Name = name;
		//性别
		int sex;
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				//输入正确 退出循环输入
				abs->persomArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入:" << endl;
		}
		//年龄
		int age;;
		cout << "请输入年龄:" << endl;
		cin >> age;
		abs->persomArray[ret].m_Age = age;
		//电话
		string phone;
		cout << "请输入电话:" << endl;
		cin >> phone;
		abs->persomArray[ret].m_Phone = phone;
		//住址
		string address;
		cout << "请输入住址:" << endl;
		cin >> address;
		abs->persomArray[ret].m_Addr = address;

		cout << "修改成功！" << endl;
	}
	else //未找到联系人
	{
		cout << "查无此人！" << endl;
	}

	system("pause");//请按任意键继续
	system("cls");//清屏
}

//6、清空所有联系人
void cleanPerson(Addressbooks * abs)
{
	abs->m_Size = 0; //将当前记录联系人数量置0，做逻辑清空操作
	cout << "通讯录已清空！" << endl;
	system("pause");//请按任意键继续
	system("cls"); //清屏
}

//1、菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	//创建用户选择输入的变量
	int select = 0;

	while (true)
	{
		//菜单调用
		showMenu();

		//接收用户的选择
		cin >> select;

		switch (select)
		{
		//1、添加联系人
		case 1:
			addPerson(&abs); //利用地址传递，可以修饰实参
			break;

		//2、显示联系人
		case 2:
			showPerson(&abs);
			break;

		// 3、删除联系人
		case 3:
		//{
			//cout << "请输入删除联系人姓名：" << endl;
			//string name;
			//cin >> name;

			//if (isExist(&abs, name) == -1)
			//{
				//cout << "查无此人" << endl;
			//}
			//else
			//{
				//cout << "找到此人" << endl;
			//}
		//}
			deletePerson(&abs);
			break;

		// 4、查找联系人
		case 4:
			findPerson(&abs);
			break;

		//5、修改联系人
		case 5:
			modifyPerson(&abs);
			break;

		//6、清空联系人
		case 6:
			cleanPerson(&abs);
			break;

		//0、退出通讯录
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;

		default:
			break;
		}
	}

	
	system("pause");

	return 0;
}