#include<iostream>
using namespace std;

//抽象不同的零件类
//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

//抽象内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//提供工作的函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	//提供析构函数 释放3个电脑零件
	~Computer()
	{
		//释放CPU零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//释放显卡零件
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		//释放内存条零件
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU *m_cpu;//CPU的零件指针
	VideoCard* m_vc;//显卡零件指针
	Memory* m_mem;//内存条零件指针
};

//具体厂商
//Inter厂商
class InterCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Inter的CPU开始计算了！" << endl;
	}
};

class InterVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter的显卡开始显示了！" << endl;
	}
};

class InterMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter的内存条开始存储了！" << endl;
	}
};

//AMD厂商
class AMDCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "AMD的CPU开始计算了！" << endl;
	}
};

class AMDVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "AMD的显卡开始显示了！" << endl;
	}
};

class AMDMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "AMD的内存条开始存储了！" << endl;
	}
};

void test_11()
{
	//第一台电脑组装
	//第一台电脑零件
	CPU* inter_cpu = new InterCPU;
	VideoCard* inter_videocard = new InterVideoCard;
	Memory* inter_memory = new InterMemory;
	cout << "第一台电脑开始工作..." << endl;
	//创建第一台电脑
	Computer* computer_1 = new Computer(inter_cpu, inter_videocard, inter_memory);
	computer_1->work();
	delete computer_1;

	cout << "------------------------" << endl;

	//第二台电脑组装
	//第二台电脑零件
	//CPU* amd_cpu = new AMDCPU;
	//VideoCard* amd_videocard = new AMDVideoCard;
	//Memory* amd_memory = new AMDMemory;
	cout << "第二台电脑开始工作..." << endl;
	//创建第二台电脑
	//Computer* computer_2 = new Computer(amd_cpu, amd_videocard, amd_memory);
	Computer* computer_2 = new Computer(new AMDCPU,new AMDVideoCard,new AMDMemory);
	computer_2->work();
	delete computer_2;

	cout << "------------------------" << endl;

	//第三台电脑组装
	//第三台电脑零件
	cout << "第三台电脑开始工作..." << endl;
	//创建第二台电脑
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