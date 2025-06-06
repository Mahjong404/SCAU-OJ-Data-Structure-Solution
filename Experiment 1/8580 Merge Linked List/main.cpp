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
线性链表的基本操作如下：
#include<stdio.h>
#include<malloc.h>
#define ERROR 0
#define OK 1
#define ElemType int

typedef int Status;
typedef struct LNode
{
 int data;
 struct LNode *next;
}LNode,*LinkList;


Status ListInsert_L(LinkList &L, int i, ElemType e) {  // 算法2.9
  // 在带头结点的单链线性表L的第i个元素之前插入元素e
  LinkList p,s;
  p = L;
  int j = 0;
  while (p && j < i-1) {  // 寻找第i-1个结点
    p = p->next;
    ++j;
  }
  if (!p || j > i-1) return ERROR;      // i小于1或者大于表长
  s = (LinkList)malloc(sizeof(LNode));  // 生成新结点
  s->data = e;  s->next = p->next;      // 插入L中
  p->next = s;
  return OK;
} // LinstInsert_L

Status ListDelete_L(LinkList &L, int i, ElemType &e) {  // 算法2.10
  // 在带头结点的单链线性表L中，删除第i个元素，并由e返回其值
  LinkList p,q;
  p = L;
  int j = 0;
  while (p->next && j < i-1) {  // 寻找第i个结点，并令p指向其前趋
    p = p->next;
    ++j;
  }
  if (!(p->next) || j > i-1) return ERROR;  // 删除位置不合理
  q = p->next;
  p->next = q->next;           // 删除并释放结点
  e = q->data;
  free(q);
  return OK;
} // ListDelete_L

设计一个算法将两个非递减有序链表A和B合并成一个新的非递减有序链表C。



输入格式
第一行：单链表A的元素个数
第二行：单链表A的各元素（非递减），用空格分开
第三行：单链表B的元素个数
第四行：单链表B的各元素（非递减），用空格分开


输出格式
第一行：单链表A的元素列表
第二行：单链表B的元素列表
第三行：合并后单链表C的元素列表


输入样例
6
12 24 45 62 84 96
4
15 31 75 86


输出样例
List A:12 24 45 62 84 96
List B:15 31 75 86
List C:12 15 24 31 45 62 75 84 86 96
*/
