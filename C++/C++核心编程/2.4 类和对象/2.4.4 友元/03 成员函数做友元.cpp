#include<iostream>
using namespace std;
#include<string>

class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();//��visit�������Է���Building��˽�г�Ա
	void visit2();//��visit���������Է���Building��˽�г�Ա
private:
	Building* building;
};

//��������
class Building
{
	//���߱����� GoodGay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
	friend void GoodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

//����д��Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

//����д��Ա����
GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}

void GoodGay::visit()
{
	cout << "visit���� ���ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "visit���� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "visit2���� ���ڷ��ʣ�" << building->m_SittingRoom << endl;

	//cout << "visit2���� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test03()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test03();

	system("pause");

	return 0;
}