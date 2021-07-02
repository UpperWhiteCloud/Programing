#include<iostream>
using namespace std;

int main3()
{
	//do...while语句
	//在屏幕中输出0到9这10个数字

	int num = 0;

	do
	{
		cout << num << endl;
		num++;//num = num + 1
	} 
	while (num < 10);

	//do...while和while的区别在于，do...while会先执行一次循环语句，再判断循环条件

	system("pause");

	return 0;
}