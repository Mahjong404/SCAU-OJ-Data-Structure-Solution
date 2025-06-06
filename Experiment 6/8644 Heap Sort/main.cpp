#include <iostream>
#include <vector>

using namespace std;

void heap(vector<int> &a,int p,int size){
    int left=2*p+1,right=left+1,max=p;
    if(left<size&&a[left]>a[max])
        max=left;
    if(right<size&&a[right]>a[max])
        max=right;
    if(max!=p){
        swap(a[p],a[max]);
        heap(a,max,size);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a)
        cin>>x;

    //从最后一个非叶子节点开始，逐层向上调整堆，构建初始的最大堆
    for(int i=n/2-1;i>=0;heap(a,i--,n));
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;

    // 每次交换堆顶与末尾元素，并调整堆
    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heap(a,0,i);    // 调整堆，堆大小为 i
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl;
    }
}



/*
Description
用函数实现堆排序，并输出每趟排序的结果



输入格式
第一行：键盘输入待排序关键的个数n
第二行：输入n个待排序关键字，用空格分隔数据


输出格式
第一行：初始建堆后的结果
其后各行输出交换堆顶元素并调整堆的结果，数据之间用一个空格分隔


输入样例
10
5 4 8 0 9 3 2 6 7 1


输出样例
9 7 8 6 4 3 2 5 0 1
8 7 3 6 4 1 2 5 0 9
7 6 3 5 4 1 2 0 8 9
6 5 3 0 4 1 2 7 8 9
5 4 3 0 2 1 6 7 8 9
4 2 3 0 1 5 6 7 8 9
3 2 1 0 4 5 6 7 8 9
2 0 1 3 4 5 6 7 8 9
1 0 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
*/
