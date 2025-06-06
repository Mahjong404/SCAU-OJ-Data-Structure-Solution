#include <iostream>

using namespace std;

int akm(int m,int n){
    if(m==0)
        return n+1;
    else if(m>0&&n==0)
        return akm(m-1,1);
    else
        return akm(m-1,akm(m,n-1));
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<akm(m,n);
    return 0;
}



/*
Description
阿克曼(Ackmann)函数A(m，n)中，m，n定义域是非负整数(m≤3,n≤10)，函数值定义为：




输入格式
输入m和n。


输出格式
函数值。


输入样例
2 3


输出样例
9
*/
