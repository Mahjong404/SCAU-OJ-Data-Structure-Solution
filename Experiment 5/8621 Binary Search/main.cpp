#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
        cin>>a[i];
	int j;
	cin>>j;
	auto pos=find(a.begin(),a.end(),j);
	if(pos!=a.end())
        cout<<"The element position is "<<pos-a.begin()<<"."<<endl;//从0开始索引，注意与顺序查找区分
	else
        cout<<"The element is not exist."<<endl;
	return 0;
}



/*
Description 编写Search_Bin函数，实现在一个递增有序数组ST中采用折半查找法确定元素位置的算法.


输入格式
第一行:元素个数n
第二行：依次输入n个元素的值（有序）
第三行：输入要查找的关键字key的值


输出格式
输出分两种情形：
1.如果key值存在，则输出其在表中的位置x(表位置从0开始),格式为The element position is x.
2.如果key值不存在输出："The element is not exist."


输入样例
6
1 3 5 7 9 10
5


输出样例
The element position is 2.
*/
