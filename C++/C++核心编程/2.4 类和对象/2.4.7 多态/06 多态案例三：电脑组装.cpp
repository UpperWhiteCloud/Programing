#include<iostream>
using namespace std;

//����ͬ�������
//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};

//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//�����ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿ�
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	//�ṩ�������� �ͷ�3���������
	~Computer()
	{
		//�ͷ�CPU���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//�ͷ��Կ����
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		//�ͷ��ڴ������
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU *m_cpu;//CPU�����ָ��
	VideoCard* m_vc;//�Կ����ָ��
	Memory* m_mem;//�ڴ������ָ��
};

//���峧��
//Inter����
class InterCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Inter��CPU��ʼ�����ˣ�" << endl;
	}
};

class InterVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class InterMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};

//AMD����
class AMDCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "AMD��CPU��ʼ�����ˣ�" << endl;
	}
};

class AMDVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "AMD���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class AMDMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "AMD���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};

void test_11()
{
	//��һ̨������װ
	//��һ̨�������
	CPU* inter_cpu = new InterCPU;
	VideoCard* inter_videocard = new InterVideoCard;
	Memory* inter_memory = new InterMemory;
	cout << "��һ̨���Կ�ʼ����..." << endl;
	//������һ̨����
	Computer* computer_1 = new Computer(inter_cpu, inter_videocard, inter_memory);
	computer_1->work();
	delete computer_1;

	cout << "------------------------" << endl;

	//�ڶ�̨������װ
	//�ڶ�̨�������
	//CPU* amd_cpu = new AMDCPU;
	//VideoCard* amd_videocard = new AMDVideoCard;
	//Memory* amd_memory = new AMDMemory;
	cout << "�ڶ�̨���Կ�ʼ����..." << endl;
	//�����ڶ�̨����
	//Computer* computer_2 = new Computer(amd_cpu, amd_videocard, amd_memory);
	Computer* computer_2 = new Computer(new AMDCPU,new AMDVideoCard,new AMDMemory);
	computer_2->work();
	delete computer_2;

	cout << "------------------------" << endl;

	//����̨������װ
	//����̨�������
	cout << "����̨���Կ�ʼ����..." << endl;
	//�����ڶ�̨����
	Computer* computer_3 = new Computer(new AMDCPU, new InterVideoCard, new AMDMemory);
	computer_3->work();
	delete computer_3;
}

int main()
{
	test_11();

	system("pause");

	return 0;
}