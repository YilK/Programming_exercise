#include <iostream>
#include <string>
using namespace std;
typedef struct node
{
   	char data;
    struct node *lchild,*rchild;
}*BiTree;
void Insert(BiTree &T,char x)
{
    if(T==NULL)
    {
        T=new node;
        T->data=x;
        T->lchild=NULL;
        T->rchild=NULL;
        return ;
    }
    if(x==T->data) return;
    else if(x>T->data) Insert(T->lchild,x);
    else Insert(T->rchild,x);
}
void Pre(BiTree T,string &s)
{
    if(T!=NULL)
    {
        s=s+(T->data);
        Pre(T->lchild,s);
        Pre(T->rchild,s);
    }
}
void In(BiTree T,string &s)
{
	if(T!=NULL)
	{
		In(T->lchild,s);
		s=s+(T->data);
		In(T->rchild,s);
	}
}
int main()
{
    BiTree T=NULL;
    int n;
    cin>>n;
    string str;
    string a,b;
    cin>>str;
    int i;
    for(i=0;i<str.size();i++)
    {
    	Insert(T,str[i]);
	}
	Pre(T,a);
	In(T,b);
	for(i=0;i<n;i++)
	{
		T=NULL;
		string c,d;
		cin>>str;
		if(str=="0")
			break;
		for(int j=0;j<str.size();j++)
    	{
    		Insert(T,str[j]);
		}
		Pre(T,c);
		In(T,d);
		if(c==a&&d==b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0; 
    
}
