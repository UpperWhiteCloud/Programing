#include<iostream>
using namespace std;

//对象的初始化和清理
class Person
{
public:
	//构造函数 进行初始化操作
	//1. 没有返回值 不用写void
	//2. 函数名 与类名相同
	//3. 构造函数可以有参数，可以发送重载
	//4. 创建对象的时候，构造函数会自动调用构造，而且只会调用一次
	Person()
	{
		cout << "Person 构造函数的调用" << endl;
	}

	//2、析构函数 进行清理的操作
	//1. 没有返回值 也不写void
	//2. 函数名与类名相同，在名称前加上符号~
	//3. 析构函数不可以有参数，不可以发生重载
	//4. 对象在销毁前 会自动调用析构函数，而且只会调用一次
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}
};

//构造和析构都是必须有的操作，如果没有自己不提供，编译器会提供一个空实现的构造和析构
void test_1()
{
	Person p;//在栈上的数据，test_1执行完毕后，释放这个对象
}

int main1()
{
	test_1();

	//Person p;

	system("pause");

	return 0;
}