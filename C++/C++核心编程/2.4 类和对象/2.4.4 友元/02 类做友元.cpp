#include<iostream>
using namespace std;
#include<string>

//类做友元

class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();//参观函数 访问Building中的属性
private:
	Building * building;
};

//建筑物类
class Building
{
	//GoodGay类是本类的好朋友，可以访问本类中的私有成员
	friend class GoodGay;
public:
	Building();
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

//类外写成员函数
Building::Building()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

//类外写成员函数
GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友 正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友 正在访问：" << building->m_BedRoom << endl;
}

void test02()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test02();

	system("pause");

	return 0;
}