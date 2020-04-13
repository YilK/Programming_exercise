#include <iostream>
using namespace std;
typedef struct node
{
	int data;
	struct node *lchild,*rchild;
}*BiTree;
void Insert(BiTree &T,int x)//插入元素到二叉树中去 
{
	if(T==NULL)
	{
		T=new node;
		T->data=x;
		T->lchild=NULL;
		T->rchild=NULL;
		return ;
	}
	if(x==T->data) return ;
	else if(x<T->data)	Insert(T->lchild,x);
	else Insert(T->rchild,x);
}
void Preorder(BiTree T)
{
	if(T!=NULL)
	{
		cout<<T->data<<' ';
		Preorder(T->lchild);
		Preorder(T->rchild); 
	}
} 
int main()
{
	BiTree T=NULL;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		Insert(T,x);
	} 
	Preorder(T);
	return 0;
}
