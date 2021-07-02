#include "WorkerManager.h"
#include<string>

WorkerManager::WorkerManager()
{
	//1���ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		//cout << "�ļ������ڣ�" << endl;

		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;

		//�ر��ļ�
		ifs.close();
		return;
	}

	//2���ļ����� ����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//�ļ�Ϊ��
		//cout << "�ļ�Ϊ�գ�" << endl;
		
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;

		//�ر��ļ�
		ifs.close();
		return;
	}

	//3���ļ����ڣ����Ҽ�¼����
	int num = this->get_EmpNum();
	//cout << "ְ������Ϊ��" << num << endl;
	this->m_EmpNum = num;

	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ��е����ݣ��浽������
	this->init_Emp();

	////���Դ���
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "ְ����ţ�" << this->m_EmpArray[i]->m_Id
	//		 << "\t������" << this->m_EmpArray[i]->m_Name
	//		 << "\t���ű�ţ�" << this->m_EmpArray[i]->m_Dep_Id << endl;
	//}
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		//ɾ����������ָ��
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

//չʾ�˵�
void WorkerManager::ShowMenu()
{
	cout << "**************************************************" << endl;
	cout << "*************  ��ӭʹ��ְ������ϵͳ  *************" << endl;
	cout << "****************  0.�˳�����ϵͳ  ****************" << endl;
	cout << "****************  1.����ְ����Ϣ  ****************" << endl;
	cout << "****************  2.��ʾְ����Ϣ  ****************" << endl;
	cout << "****************  3.ɾ����ְְ��  ****************" << endl;
	cout << "****************  4.�޸�ְ����Ϣ  ****************" << endl;
	cout << "****************  5.����ְ����Ϣ  ****************" << endl;
	cout << "****************  6.���ձ������  ****************" << endl;
	cout << "****************  7.��������ĵ�  ****************" << endl;
	cout << "**************************************************" << endl;
	cout << endl;
}

//�˳�����ϵͳ
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);//�˳�����
}

//���ְ��
void WorkerManager::Add_Emp()
{
	cout << "���������ְ��������" << endl;

	int addNum = 0;//�����û�����������
	cin >> addNum;

	if (addNum > 0)
	{
		//���
		//��������¿ռ��С
		int newSize = this->m_EmpNum + addNum;//�¿ռ����� = ԭ����¼���� + ����������

		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize];

		//��ԭ���ռ������ݣ��������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0;i < this->m_EmpNum;i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//�������������
		for (int i = 0; i < addNum; i++)
		{
			int id;//ְ�����
			string name;//ְ������
			int dept_select;//����ѡ��

			cout << "������� " << i + 1 << " ����ְ����ţ�" << endl;
			cin >> id;

			cout << "������� " << i + 1 << " ����ְ��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ��" << endl;
			cout << "1����ͨԱ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dept_select;

			Worker* worker = NULL;
			switch (dept_select)
			{
			case 1:
				worker = new Employee(id, name, 1);
					break;
			case 2:
				worker = new Manager(id, name, 2);
					break;
			case 3:
				worker = new Boss(id, name, 3);
					break;
			default:
				break;
			}
			//������ְ��ָ�룬���浽������
			newSpace[this->m_EmpNum + i] = worker;
		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//�ɹ���Ӻ� ���浽�ļ���
		this->save();

		//��ʾ��ӳɹ�
		cout << "�ɹ������" << addNum << "����ְ��" << endl;
	}
	else
	{
		cout << "������������" << endl;
	}

	system("pause");//�����������
	system("cls");//����
}

//�����ļ�
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//������ķ�ʽ���ļ� => д�ļ�

	//��ÿ��������д�뵽�ļ���
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_Dep_Id << endl;
	}

	//�ر��ļ�
	ofs.close();
}

//ͳ���ļ�������
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ� ��

	int id;
	string name;
	int dept_id;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dept_id)
	{
		//ͳ����������
		num++;
	}

	return num;
}

//��ʼ��Ա��
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ� ��

	int id;
	string name;
	int dept_id;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> dept_id)
	{
		Worker* worker = NULL;

		if (dept_id == 1)//��ͨԱ��
		{
			worker = new Employee(id, name, dept_id);
		}
		else if (dept_id == 2)//����
		{
			worker = new Manager(id, name, dept_id);
		}
		else//�ϰ�
		{
			worker = new Boss(id, name, dept_id);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}

	//�ر��ļ�
	ifs.close();
}

//��ʾְ��
void WorkerManager::Show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->ShowInformation();
		}
	}

	system("pause");//�����������
	system("cls");//����
}

//ɾ��ְ��
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		//����ְ�����ɾ��
		cout << "��������Ҫɾ��ְ����ţ�" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1)//˵��ְ�����ڣ�����Ҫɾ����indexλ���ϵ�ְ��
		{
			for (int i = index; i < this->m_EmpNum; i++)
			{
				//����ǰ��
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			//���������м�¼��Ա����
			this->m_EmpNum--;
			//����ͬ�����µ��ļ���
			this->save();

			cout << "ɾ���ɹ�!" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}

	system("pause");//�����������
	system("cls");//����
}

//�ж�ְ���Ƿ����  ������ڷ���ְ�����������е�λ�ã������ڷ���-1
int WorkerManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			//�ҵ�ְ��
			index = i;

			break;
		}
	}

	return index;
}

//�޸�ְ��
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��1" << endl;
	}
	else
	{
		cout << "��������Ҫ�޸�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//���ҵ���ŵ�ְ��

			delete this->m_EmpArray[ret];

			int new_id = 0;
			string new_name = "";
			int new_dept_select = 0;

			cout << "�鵽 " << id << " ��ְ������������ְ���ţ�" << endl;
			cin >> new_id;

			cout << "��������������" << endl;
			cin >> new_name;

			cout << "�������¸�λ��" << endl;
			cout << "1����ͨԱ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> new_dept_select;

			Worker* worker = NULL;
			switch (new_dept_select)
			{
			case 1:
				worker = new Employee(new_id, new_name, new_dept_select);
				break;
			case 2:
				worker = new Manager(new_id, new_name, new_dept_select);
				break;
			case 3:
				worker = new Boss(new_id, new_name, new_dept_select);
				break;
			default:
				break;
			}

			//�������ݵ�������
			this->m_EmpArray[ret] = worker;

			cout << "�޸ĳɹ�" << endl;

			//���浽�ļ���
			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴��ˣ�" << endl;
		}
	}

	system("pause");//�����������
	system("cls");//����
}

//����ְ��
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��1" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1������ְ���ı�Ų���" << endl;
		cout << "2������ְ������������" << endl;

		int select = 0;
		cin >> select;

		if (select == 2)
		{
			//������������
			cout << "��������ҵ�������" << endl;
			string name;
			cin >> name;

			//�����ж��Ƿ�鵽�ı�־
			bool flag = false;//Ĭ��Ϊ�ҵ�ְ��

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ " << this->m_EmpArray[i]->m_Id << "��ְ����Ϣ���£�" << endl;

					flag = true;
					
					//������ʾ��Ϣ�ӿ�
					this->m_EmpArray[i]->ShowInformation();
				}
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}
		else if (select == 1)
		{
			//���ձ�Ų���
			cout << "��������ҵ�ְ����ţ�" << endl;
			int id;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				//�ҵ�ְ��
				cout << "���ҳɹ���" << endl;
				cout << "��ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->ShowInformation();
			}
			else
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}
		else
		{
			cout << "����ѡ������" << endl;
		}
	}

	system("pause");//�����������
	system("cls");//����
}

//���ձ������
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��1" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ķ�ʽ��" << endl;
		cout << "1������ְ���ı������" << endl;
		cout << "2������ְ���ı�Ž���" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int Min_or_Max = i;//������Сֵ �� ���ֵ���±�
			
			for (int j = i + 1;j < this->m_EmpNum;j++)
			{
				if (select == 1)//����
				{
					if (this->m_EmpArray[Min_or_Max]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						Min_or_Max = j;
					}
				}
				else  //����
				{
					if (this->m_EmpArray[Min_or_Max]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						Min_or_Max = j;
					}
				}
			}
			//�ж�һ��ʼ�϶�  ��Сֵ�����ֵ �ǲ��� �������Сֵ�����ֵ��������� ��������
			if (i != Min_or_Max)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[Min_or_Max];
				this->m_EmpArray[Min_or_Max] = temp;
			}
		}

		cout << "����ɹ��������Ľ��Ϊ��" << endl;
		//����������浽�ļ���
		this->save();
		//չʾ���е�ְ��
		this->Show_Emp();
	}
}

//����ļ�
void WorkerManager::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//����ļ�
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ������´���
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray = NULL;
			}

			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ���" << endl;
	}

	system("pause");
	system("cls");
}