// CPP.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v{ 1,2,3,4,5,6,7,8,9 };
	for (auto& i : v)
		i *= i;  //把更新后的i值返回更新列表V
	for (auto i : v)
		cout << i << " ";
	cout << endl;
		return 0;
}

