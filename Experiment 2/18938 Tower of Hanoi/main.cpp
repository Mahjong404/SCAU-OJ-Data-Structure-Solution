#include <iostream>

using namespace std;

void hanoi(int n,char from,char to,char help){
    if(n==1){
        cout<<from<<"->1->"<<to<<endl;
        return;
    }
    hanoi(n-1,from,help,to);
    cout<<from<<"->"<<n<<"->"<<to<<endl;
    hanoi(n-1,help,to,from);
}

int main()
{
    int n;
    char from,to,help;
    cin>>n>>from>>to>>help;
    hanoi(n,from,to,help);
    return 0;
}



/*
Description
汉诺塔（Tower of Hanoi），又称河内塔，是一个源于印度古老传说的益智玩具。
大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘。
大梵天命令婆罗门把圆盘从下面开始按大小顺序重新摆放在另一根柱子上。
并且规定，在小圆盘上不能放大圆盘，在三根柱子之间一次只能移动一个圆盘。
由于条件是一次只能移动一个盘，且不允许大盘放在小盘上面，所以64个盘的移动次数是：18,446,744,073,709,551,615
这是一个天文数字，若每一微秒可能计算(并不输出)一次移动，那么也需要几乎一百万年。
我们仅能找出问题的解决方法并解决较小N值时的汉诺塔，但很难用计算机解决64层的汉诺塔。
假定圆盘从小到大编号为1, 2, ...



输入格式
输入为一个整数(小于20）后面跟三个单字符字符串。
整数为盘子的数目，后三个字符表示三个杆子的编号。


输出格式
输出每一步移动盘子的记录。一次移动一行。
每次移动的记录为例如 a->3->b 的形式，即把编号为3的盘子从a杆移至b杆。


输入样例
2 a b c


输出样例
a->1->c
a->2->b
c->1->b
*/
