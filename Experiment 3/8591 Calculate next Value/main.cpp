#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        s="0"+s;
        int i=1,j=0;
        vector<int> next(s.size()+1);   //防止i访问next时溢出
        while(i<s.size()){
            if(j==0||s[i]==s[j])
                next[++i]=++j;          //先递增i和j，再next[i]=j;
            else
                j=next[j];
        }

        cout<<"NEXT J is:";
        for(int i=1;i<s.size();i++)
            cout<<next[i];
        cout<<endl;
    }
    return 0;
}



/*
Description 编写算法，录入多个字符串计算并验证NEXT值，输入0结束。本题目给出部分代码，请补全内容。]
#include "stdio.h"
#include "stdlib.h"
#include "iostream.h"
#define  MAXSTRLEN  255                   // 用户可在255以内定义最大串长
typedef unsigned char SString[MAXSTRLEN+1];	// 0号单元存放串的长度

void get_next(SString T,int next[]){
// 算法4.7
// 求模式串T的next函数值并存入数组next
   // 请补全代码




}
void main(){
int next[MAXSTRLEN];
SString S;
int n,i,j;
char ch;
scanf("%d",&n);    // 指定要验证NEXT值的字符串个数
ch=getchar();
for(i=1;i<=n;i++)
{
ch=getchar();
for(j=1;j<=MAXSTRLEN&&(ch!='\n');j++)    // 录入字符串
{
S[j]=ch;
ch=getchar();
}
S[0]=j-1;    // S[0]用于存储字符串中字符个数
get_next(S,next);
printf("NEXT J is:");
for(j=1;j<=S[0];j++)
printf("%d",next[j]);
printf("\n");
}
}



输入格式
第一行：输入n，表示有n个需计算NEXT值的字符串
第二至n+1行：每行输入一个字符串


输出格式
第1至第n行：通过计算每相应行的字符串得出的NEXT值


输入样例
4
abcdefg
aaaaab
abaabcac
aaabaaab


输出样例
NEXT J is:0111111
NEXT J is:012345
NEXT J is:01122312
NEXT J is:01231234
*/
