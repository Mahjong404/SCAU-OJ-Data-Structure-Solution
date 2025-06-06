#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    // Read list A
    int n;
    cin>>n;
    vector<int> A;
    vector<int> C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
        C.push_back(x);
    }

    // Read list B
    int m;
    cin>>m;
    vector<int> B;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
        C.push_back(x);
    }

    // Sort C
    sort(C.begin(),C.end());

    // Output list A
    cout<<"List A:";
    for(int num:A){
        cout<<num<<" ";
    }
    cout<<endl;

    // Output list B
    cout<<"List B:";
    for(int num:B){
        cout<<num<<" ";
    }
    cout<<endl;

    // Output merged list C
    cout<<"List C:";
    for(int num:C){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}



/*
Description
若线性表中数据元素相互之间可以比较，且数据元素在表中按值递增或递减，则称该表为有序表。

编写算法，将两个非递减有序顺序表A和B合并成一个新的非递减有序顺序表C。



输入格式
第一行：顺序表A的元素个数
第二行：顺序表A的各元素（非递减），用空格分开
第三行：顺序表B的元素个数
第四行：顺序表B的各元素（非递减），用空格分开


输出格式
第一行：顺序表A的元素列表
第二行：顺序表B的元素列表
第三行：合并后顺序表C的元素列表


输入样例
5
1 3 5 7 9
5
2 4 6 8 10


输出样例
List A:1 3 5 7 9
List B:2 4 6 8 10
List C:1 2 3 4 5 6 7 8 9 10


提示
输出时注意大小写和标点。
*/
