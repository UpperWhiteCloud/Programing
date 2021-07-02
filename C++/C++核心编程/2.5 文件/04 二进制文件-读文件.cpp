#include<iostream>
using namespace std;
#include<fstream>

//二进制文件 读文件
class Person
{
public:
	char m_Name[64];//姓名
	int m_Age;//年龄
};

void test_4()
{
	//1、包含头文件<fstream>

	//2、创建流对象
	ifstream ifs;

	//3、打开文件 判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//4、读内容
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << endl;
	cout << "年龄：" << p.m_Age << endl;

	//5、关闭文件
	ifs.close();
}

int main()
{
	test_4();

	system("pause");

	return 0;
}