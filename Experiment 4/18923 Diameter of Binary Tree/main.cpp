#include <iostream>
#include <vector>
#include <array>

using namespace std;

int n,maxlen=0;
vector<array<int,2>> child;

int dfs(int root){
    if(!root)
        return 0;

    int lchild=dfs(child[root][0]);
    int rchild=dfs(child[root][1]);

    maxlen=max(maxlen,lchild+rchild);

    return max(lchild,rchild)+1;
}

int main(){
    cin>>n;
    child.resize(n+1);
    for(int i=0;i<n-1;i++){   //读的是边，边数为n-1
        int x,y;
        cin>>x>>y;
        if(!child[x][0])
            child[x][0]=y;
        else
            child[x][1]=y;
    }
    dfs(1);
    cout<<maxlen;
    return 0;
}



/*
Description
给定一棵二叉树，你需要计算它的直径长度。一棵二叉树的直径长度是任意两个结点路径长度中的最大值。这条路径可能穿过也可能不穿过根结点。
          1
         / \
        2   3
       / \
      4   5
答案为3, 它的长度是路径 [4,2,1,3] 或者 [5,2,1,3]。



输入格式
共n行。
第一行一个整数n，表示有n个结点，编号为1至n。
第二行至第n行，每行有两个整数x和y，表示在二叉树中x为y的父节点。x第一次出现时y为左孩子


输出格式
输出二叉树的直径。


输入样例
5
1 2
1 3
2 4
2 5


输出样例
3
*/
