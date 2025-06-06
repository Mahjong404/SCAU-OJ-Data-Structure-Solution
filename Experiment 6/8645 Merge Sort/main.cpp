#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a)
        cin>>x;

    for(int size=1;size<n;size*=2){
        for(int i=0;i<n;i+=2*size)
            sort(a.begin()+i,a.begin()+min(i+2*size,n));

        for(auto x:a)
            cout<<x<<" ";
        cout << endl;
    }
    return 0;
}



/*
Description
用函数实现归并排序（非递归算法），并输出每趟排序的结果



输入格式
第一行：键盘输入待排序关键的个数n
第二行：输入n个待排序关键字，用空格分隔数据


输出格式
每行输出每趟排序的结果，数据之间用一个空格分隔


输入样例
10
5 4 8 0 9 3 2 6 7 1


输出样例
4 5 0 8 3 9 2 6 1 7
0 4 5 8 2 3 6 9 1 7
0 2 3 4 5 6 8 9 1 7
0 1 2 3 4 5 6 7 8 9
*/
