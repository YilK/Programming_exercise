#include <iostream>
using namespace std;
typedef struct node{
	char data;
	struct node *lchild,*rchild;
}*BiTree;

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
//先序遍历的方式创建二叉树
void CreatBitTree(BiTree &T)
{
	char c;
	cin>>c;
	if(c=='0')	T=NULL;
	else
	{
		T=new node;
		T->data=c;
		CreatBitTree(T->lchild);
		CreatBitTree(T->rchild);
	}
} 
//二叉树的深度
int Deep(BiTree T)
{
	if(T==NULL) return 0;
	int x=Deep(T->lchild);
	int y=Deep(T->rchild);
	return max(x,y)+1;
} 
//先序遍历
void Preorder(BiTree T)
{
	if(T!=NULL)
	{
		cout<<T->data<<" ";
		Preorder(T->lchild);
		Preorder(T->rchild); 
	}
} 
//中序遍历
void Inorder(BiTree T)
{
	if(T!=NULL)
	{
		Inorder(T->lchild);
		cout<<T->data<<" ";
		Inorder(T->rchild); 
	}
} 
//后序遍历
void Postorder(BiTree T)
{
	if(T!=NULL)
	{
		Postorder(T->lchild);
		Postorder(T->rchild); 
		cout<<T->data<<" ";
	}
} 
//叶子节点数
int leaf(BiTree T)
{
	if(T==NULL)
		return 0;
	if(T->lchild==NULL&&T->rchild==NULL)
		return 1;
	return leaf(T->lchild)+leaf(T->rchild);
} 
int main()
{
	BiTree T;
	CreatBitTree(T);
}

//第二种 
#include<bits/stdc++.h>

using namespace std;
typedef struct node{
	
	char data;
	struct node *lchild,*rchild;
}*BiTree;
int i;
void CreatTree(BiTree &T,string s){
	if(i>s.size()-1)
	 return ;
	
	if(s[i]=='#'){
		i++;
		T==NULL;
	}
	else{
		T=new node;
		T->data=s[i++];
		T->lchild=NULL;
		T->rchild=NULL;
		CreatTree(T->lchild,s);
		CreatTree(T->rchild,s);
	}
}
void inorder(BiTree &T){
	
	if(T!=NULL){
		inorder(T->lchild);
		cout<<T->data<<" ";
		inorder(T->rchild);
	}
}
int main(){
	string s;
	while(cin>>s){
		
		i=0;
		BiTree T=NULL;
	    CreatTree(T,s);
	    inorder(T);
	    cout<<endl;
	}
	
	return 0;
} 
