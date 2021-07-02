#include<iostream>
using namespace std;

//立方体类设计
//1、创建立方体类
//2、设计属性
//3、设计行为 获取立方体面积和体积
//4、分别利用全局函数和成员函数 判断两个立方体是否相等

class Cube
{
public:
	//设置长
	void setLength(int length)
	{
		m_Length = length;
	}

	//获取长
	int getLength()
	{
		return m_Length;
	}

	//设置宽
	void setWidth(int width)
	{
		m_Width = width;
	}

	//获取宽
	int getWidth()
	{
		return m_Width;
	}

	//设置高
	void setHight(int hight)
	{
		m_Hight = hight;
	}

	//获取高
	int getHight()
	{
		return m_Hight;
	}

	//获取立方体面积
	int calculate_S()
	{
		return 2 * m_Length * m_Width + 2 * m_Length * m_Hight + 2 * m_Width * m_Hight;
	}

	//获取立方体体积
	int calculate_V()
	{
		return m_Length * m_Width * m_Hight;
	}

	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if (m_Length == c.getLength() && m_Width == c.getWidth() && m_Hight == c.getHight())
		{
			return true;
		}
		return false;
	}

private:
	int m_Length;//长
	int m_Width;//宽
	int m_Hight;//高
};

//利用全局函数判断 两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHight() == c2.getHight())
	{
		return true;
	}
	return false;
}

int main6()
{
	//创建立方体对象
	Cube c1;
	c1.setLength(10);
	c1.setWidth(10);
	c1.setHight(10);

	//2* 10 * 10 + 2* 10 * 10 + 2* 10 * 10 = 600
	cout << "c1的面积为：" << c1.calculate_S() << endl;
	//10 * 10 * 10 = 1000 
	cout << "c1的体积为：" << c1.calculate_V() << endl;

	//创建第二个立方体
	Cube c2;
	c2.setLength(10);
	c2.setWidth(10);
	c2.setHight(10);

	//利用全局函数判断
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的" << endl;
	}

	//利用成员函数判断
	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "成员函数判断:c1和c2是相等的" << endl;
	}
	else
	{
		cout << "成员函数判断:c1和c2是不相等的" << endl;
	}

	system("pause");

	return 0;
}