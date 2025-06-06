#include<iostream>

using namespace std;

int p;
string s;

void mid(){
    char c=s[p++];
    if(c!='#'){mid();cout<<c;mid();}
}
void last(){
    char c=s[p++];
    if(c!='#'){last();last();cout<<c;}
}

int main(){
    cin>>s;
    for(char c:s)
        if(c!='#')
            cout<<c;
    cout<<endl;
    p=0;
    mid();
    cout<<endl;
    p=0;
    last();
}



/*
Description 构造二叉链表表示的二叉树：按先序次序输入二叉树中结点的值（一个字符），'#'字符表示空树，构造二叉链表表示的二叉树T；再输出三种遍历序列。本题只给出部分代码,请补全内容。
#include "stdio.h"
#include "malloc.h"
#define TRUE 1
#define FALSE 0
#define OK  1
#define ERROR  0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int  Status;

typedef char  ElemType;
typedef struct BiTNode{
  ElemType data;
  struct BiTNode *lchild,*rchild;//左右孩子指针
} BiTNode,*BiTree;

Status CreateBiTree(BiTree &T) {  // 算法6.4
  // 按先序次序输入二叉树中结点的值（一个字符），’#’字符表示空树，
  // 构造二叉链表表示的二叉树T。
  char ch;
  scanf("%c",&ch);
  if (ch=='#') T = NULL;
  else {
    if (!(T = (BiTNode *)malloc(sizeof(BiTNode)))) return ERROR;
    ________________________ // 生成根结点
     _______________________   // 构造左子树
    _________________________  // 构造右子树
  }
  return OK;
} // CreateBiTree





Status PreOrderTraverse( BiTree T) {
   // 前序遍历二叉树T的递归算法
   //补全代码,可用多个语句

} // PreOrderTraverse

Status InOrderTraverse( BiTree T) {
     // 中序遍历二叉树T的递归算法
    //补全代码,可用多个语句


} // InOrderTraverse

Status PostOrderTraverse( BiTree T) {
     // 后序遍历二叉树T的递归算法
     //补全代码,可用多个语句

} // PostOrderTraverse



int main()   //主函数
{
                      //补充代码
 }//main




输入格式
第一行：输入一棵二叉树的先序遍历序列


输出格式
第一行：二叉树的先序遍历序列
第二行：二叉树的中序遍历序列
第三行：二叉树的后序遍历序列


输入样例
AB##C##


输出样例
ABC
BAC
BCA
*/
