#include<iostream>
using namespace std;

//继承中的对象模型

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base
{
public:
	int m_D;
};

//利用开发人员命令提示工具查看对象模型
//跳转盘符 F:
//跳转文件路径 cd 具体路径下
//  cl /d1 reportSingleClassLayout类名 文件名

void test_5()
{
	//父类中私有的非静态成员属性都会被子类继承下去
	//父类中私有成员属性 是被编译器给隐藏了，因此访问不到，但是确实被继承了下去
	//16个字节
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main3()
{
	test_5();

	system("pause");

	return 0;
}