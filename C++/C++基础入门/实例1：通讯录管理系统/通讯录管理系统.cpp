#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�  1 ��  2  Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};

//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person persomArray[MAX];

	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1�������ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->persomArray[abs->m_Size].m_Name = name;

		//�Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;

		while (true)
		{
			//���������� 1 ���� 2 �����˳�ѭ������Ϊ���������ȷֵ
			//�������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->persomArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������:" << endl;
		}

		//����
		int age = 0;
		cout << "���������䣺" << endl;

		while (true)
		{
			//���������� ����0 ���� С��150 �����˳�ѭ������Ϊ���������ȷֵ
			//�������������������
			cin >> age;
			if (age > 0 && age < 150)
			{
				abs->persomArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "������������������:" << endl;
		}

		//�绰
		string phone;
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		abs->persomArray[abs->m_Size].m_Phone = phone;

		//��ַ
		string address;
		cout << "�������ͥסַ��" << endl;
		cin >> address;
		abs->persomArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ���" << endl;

		system("pause");//�밴���������
		system("cls"); //��������
	}
}

//2����ʾ������ϵ��
void showPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ�գ�����" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->persomArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->persomArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->persomArray[i].m_Age << "\t";
			cout << "�绰��" << abs->persomArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->persomArray[i].m_Addr << endl;
		}
	}

	system("pause");//�밴���������
	system("cls");//����
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
//����1   ͨѶ¼    ����2  �Ա�����
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//�ҵ��û������������
		if (abs->persomArray[i].m_Name == name)
		{
			return i;//֪���ˣ�����������������е��±���
		}
	}
	return -1;//�������������û���ҵ�������-1
}

//3��ɾ��ָ����ϵ��
void deletePerson(Addressbooks * abs)
{
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	//ret == -1   δ�鵽
	//ret != -1   �鵽��
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//���ҵ��ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->persomArray[i] = abs->persomArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");//�밴���������
	system("cls");//����
}

//4������ָ����ϵ����Ϣ
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��:" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);

	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "������" << abs->persomArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->persomArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->persomArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->persomArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->persomArray[ret].m_Addr << endl;
	}
	else //δ�ҵ���ϵ��
	{
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");//�밴���������
	system("cls");//����
}

//5���޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��:" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);

	if (ret != -1)//�ҵ�ָ����ϵ��
	{
		//����
		string name;
		cout << "����������:" << endl;
		cin >> name;
		abs->persomArray[ret].m_Name = name;
		//�Ա�
		int sex;
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				//������ȷ �˳�ѭ������
				abs->persomArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������:" << endl;
		}
		//����
		int age;;
		cout << "����������:" << endl;
		cin >> age;
		abs->persomArray[ret].m_Age = age;
		//�绰
		string phone;
		cout << "������绰:" << endl;
		cin >> phone;
		abs->persomArray[ret].m_Phone = phone;
		//סַ
		string address;
		cout << "������סַ:" << endl;
		cin >> address;
		abs->persomArray[ret].m_Addr = address;

		cout << "�޸ĳɹ���" << endl;
	}
	else //δ�ҵ���ϵ��
	{
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");//�밴���������
	system("cls");//����
}

//6�����������ϵ��
void cleanPerson(Addressbooks * abs)
{
	abs->m_Size = 0; //����ǰ��¼��ϵ��������0�����߼���ղ���
	cout << "ͨѶ¼����գ�" << endl;
	system("pause");//�밴���������
	system("cls"); //����
}

//1���˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	//�����û�ѡ������ı���
	int select = 0;

	while (true)
	{
		//�˵�����
		showMenu();

		//�����û���ѡ��
		cin >> select;

		switch (select)
		{
		//1�������ϵ��
		case 1:
			addPerson(&abs); //���õ�ַ���ݣ���������ʵ��
			break;

		//2����ʾ��ϵ��
		case 2:
			showPerson(&abs);
			break;

		// 3��ɾ����ϵ��
		case 3:
		//{
			//cout << "������ɾ����ϵ��������" << endl;
			//string name;
			//cin >> name;

			//if (isExist(&abs, name) == -1)
			//{
				//cout << "���޴���" << endl;
			//}
			//else
			//{
				//cout << "�ҵ�����" << endl;
			//}
		//}
			deletePerson(&abs);
			break;

		// 4��������ϵ��
		case 4:
			findPerson(&abs);
			break;

		//5���޸���ϵ��
		case 5:
			modifyPerson(&abs);
			break;

		//6�������ϵ��
		case 6:
			cleanPerson(&abs);
			break;

		//0���˳�ͨѶ¼
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
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