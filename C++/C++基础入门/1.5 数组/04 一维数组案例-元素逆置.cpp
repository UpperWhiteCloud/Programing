#include<iostream>
using namespace std;

int main4()
{
	//实现数组元素逆置

	//1、创建数组
	int arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//2、实现逆置
	//2.1记录起始下标位置
	int start = 0;

	//2.2记录结束下标位置
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	//2.3起始下标与结束下标的元素互换
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//2.4起始位置++ 结束位置--
		start++;//start = start + 1
		end--;//end = end - 1
	}
	
	//2.5循环执行2.1操作，直到起始位置 >= 结束位置

	//3、打印逆置后的数组
	cout << "数组逆置后：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");

	return 0;
}