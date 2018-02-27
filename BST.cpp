#include<iostream>
#include<math.h>
#include<vector>
using namespace std;


class NODE
{
public:
	NODE()
	{
		value = 0;
	}
	int value;
	NODE *lchild;
	NODE *rchild;
};





class BST
{
public:
	NODE *root;
	BST(int r)
	{
		root = new NODE;
		root->value = r;
	}
	void inset(NODE *tmp,int a)
	{
		if (tmp->value > a)
		{
			if (tmp->lchild == NULL)
			{
				NODE *newchild;
				newchild = new NODE;
				newchild->value = a;
				tmp->lchild = newchild;
				
			}
			else
			{
				inset(tmp->lchild, a);
			}
		}
		else
		{
			if (tmp->rchild == NULL)
			{
				NODE *newchild;
				newchild = new NODE;
				newchild->value = a;
				tmp->rchild = newchild;
			}
			else
			{
				inset(tmp->rchild, a);
			}
		}
		
	}
	
};



void bianli(NODE *tmp, int level, int a[],int &h)
{
	if (level > h)
	{
		h = level;
	}
	a[level]++;
	if (tmp->lchild)
		bianli(tmp->lchild, level + 1, a,h);
	if (tmp->rchild)
		bianli(tmp->rchild, level + 1, a,h);
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	int N;
	cin >> N;
	int vl[1001];
	for (int i = 0; i < N; i++)
	{
		cin >> vl[i];
	}
	BST tree(vl[0]);
	for (int j = 1; j < N; j++)
	{
		tree.inset(tree.root, vl[j]);
	}
	int ans[1001];
	for (int i = 0; i < N; i++)
	{
		ans[i] = 0;
	}
	int h = 0;
	bianli(tree.root, 0, ans,h);
	n1 = ans[h];
	n2 = ans[h - 1];
	int n = n1 + n2;
	
	cout << n1 << "+" << n2 << "=" << n;
	system("pause");
	return 0;
}
