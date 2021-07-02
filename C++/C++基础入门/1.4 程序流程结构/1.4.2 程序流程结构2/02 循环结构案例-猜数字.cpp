#include<iostream>
using namespace std;
//包含time系统时间头文件
#include<ctime>

int main2()
{
	//添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数都一样
	/*
	rand() 产生的随机数在每次运行的时候都是与上一次相同的。
	若要不同, 用函数 srand() 初始化它。
	可以利用 srand((unsigned int)(time(NULL)) 的方法，
	产生不同的随机数种子，因为每一次运行程序的时间是不同的。
	*/
	srand((unsigned int)time(NULL));

	//1、系统生成随机数
	//rand() 产生的是伪随机数字，每次执行时是相同的; 若要不同, 用函数 srand() 初始化它。
	int num = rand() % 100 + 1;   //rand() % 100 + 1  生成 0 + 1~99 + 1的随机数
	//cout << num << endl;

	//2、玩家进行猜测
	int value = 0;//玩家输入的数据

	while (1)
	{
		cin >> value;

		//3、判断玩家的猜测
		//猜错  提示猜的结果  过大或者过小  重新返回第2步
		if (value > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (value < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜您猜到了！" << endl;
			//猜对  退出游戏
			break;//break，可以利用该关键字来退出当前循环
		}
	}

	

	system("pause");

	return 0;
}