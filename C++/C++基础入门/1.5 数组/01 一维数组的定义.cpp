#include<iostream>
using namespace std;

int main1()
{
	//数组

	/*
	1. 数据类型 数组名[ 数组长度 ]
    2. 数据类型 数组名[ 数组长度 ] = { 值1，值2 ... };
    3. 数据类型 数组名[ ] = { 值1,值2  ... };
	*/


	//1. 数据类型 数组名[ 数组长度 ]
	int arr1[5];
	//给数组中的元素进行赋值
	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;
	arr1[3] = 40;
	arr1[4] = 50;

	//访问数据元素
	cout << arr1[0] << endl;
	cout << arr1[1] << endl;
	cout << arr1[2] << endl;
	cout << arr1[3] << endl;
	cout << arr1[4] << endl;

	// 2. 数据类型 数组名[ 数组长度 ] = { 值1，值2 ... };
	//如果在初始化数据的时候，没有全部填写完，会用0来填补剩余数据
	int arr2[5] = { 100,200,300 };
	
	//访问数据元素
	//cout << arr2[0] << endl;
	//cout << arr2[1] << endl;
	//cout << arr2[2] << endl;
	//cout << arr2[3] << endl;
	//cout << arr2[4] << endl;
	//利用循环，输出数组中的元素
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}

	//3. 数据类型 数组名[] = { 值1,值2  ... };
	//定义数组的时候，必须有初始长度
	int arr3[] = { 90,80,70,60,50,40,30,20,10 };
	
	//利用循环，输出数组中的元素
	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}

	system("pause");

	return 0;
}