#include<iostream>
using namespace std;
#include<string>

//������Ԫ

class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();//�ιۺ��� ����Building�е�����
private:
	Building * building;
};

//��������
class Building
{
	//GoodGay���Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
	friend class GoodGay;
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
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

//����д��Ա����
GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
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