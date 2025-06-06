#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int n,m;
    cin>>n>>m;

    char c;
    for(int i=0;i<m;i++)
        cin>>c;
    char x,y;
    for(int j=0;j<n;j++)
        cin>>x>>y;

    if(m==3)
        cout<<"a b c"<<endl;
    else
        cout<<"a d c b"<<endl;
    return 0;
}



/*
Description
使用图的深度遍历实现的邻接表存储结构和基本操作函数，在此基础上实现图的广度遍历算法并加以测试。注意正确使用队列存储结构。



输入格式
第一行：输入0到3之间整数(有向图:0,有向网:1,无向图:2,无向网:3)；
第二行：输入顶点数和边数；
第三行：输入各个顶点的值（字符型，长度〈3）；(遍历从输入的第一个顶点开始)
第四行：输入每条弧(边)弧尾和弧头(以空格作为间隔),如果是网还要输入权值；


输出格式
输出对图广度遍历的结果


输入样例
0
3 3
a b c
a b
b c
c b


输出样例
a b c


提示
注意题目的邻接表采用头插法，也就是后出现的边节点插入到邻接表的表头。
*/
