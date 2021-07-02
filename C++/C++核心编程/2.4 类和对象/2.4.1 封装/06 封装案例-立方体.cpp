#include<iostream>
using namespace std;

//�����������
//1��������������
//2���������
//3�������Ϊ ��ȡ��������������
//4���ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����

class Cube
{
public:
	//���ó�
	void setLength(int length)
	{
		m_Length = length;
	}

	//��ȡ��
	int getLength()
	{
		return m_Length;
	}

	//���ÿ�
	void setWidth(int width)
	{
		m_Width = width;
	}

	//��ȡ��
	int getWidth()
	{
		return m_Width;
	}

	//���ø�
	void setHight(int hight)
	{
		m_Hight = hight;
	}

	//��ȡ��
	int getHight()
	{
		return m_Hight;
	}

	//��ȡ���������
	int calculate_S()
	{
		return 2 * m_Length * m_Width + 2 * m_Length * m_Hight + 2 * m_Width * m_Hight;
	}

	//��ȡ���������
	int calculate_V()
	{
		return m_Length * m_Width * m_Hight;
	}

	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube &c)
	{
		if (m_Length == c.getLength() && m_Width == c.getWidth() && m_Hight == c.getHight())
		{
			return true;
		}
		return false;
	}

private:
	int m_Length;//��
	int m_Width;//��
	int m_Hight;//��
};

//����ȫ�ֺ����ж� �����������Ƿ����
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
	//�������������
	Cube c1;
	c1.setLength(10);
	c1.setWidth(10);
	c1.setHight(10);

	//2* 10 * 10 + 2* 10 * 10 + 2* 10 * 10 = 600
	cout << "c1�����Ϊ��" << c1.calculate_S() << endl;
	//10 * 10 * 10 = 1000 
	cout << "c1�����Ϊ��" << c1.calculate_V() << endl;

	//�����ڶ���������
	Cube c2;
	c2.setLength(10);
	c2.setWidth(10);
	c2.setHight(10);

	//����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}

	//���ó�Ա�����ж�
	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "��Ա�����ж�:c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "��Ա�����ж�:c1��c2�ǲ���ȵ�" << endl;
	}

	system("pause");

	return 0;
}