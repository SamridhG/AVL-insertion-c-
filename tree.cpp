#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *left,*right;
		node(int data)
		{
			this->data=data;
			this->left=NULL;
			this->right=NULL;
		}
};
class tree{
public:
	node *root;
    tree()
    {
    	root=NULL;
	}
	void insert(int data)
	{
		if(root==NULL)
		{
			root=new node(data);
		}
		else
		{
			node *temp=root;
			while(true)
			{
				if(data<=temp->data)
				{
					if(temp->left==NULL)
					{
						temp->left=new node(data);
					  break;
					}
					else
					{
						temp=temp->left;
					}
				}
				else
				{
					if(temp->right==NULL)
					{
						temp->right=new node(data);
						break;
					}
					else
					{
						temp=temp->right;
				
					}
				}
				
			}
		}
	}
	void inorder(node *temp)
	{
		if(temp==NULL)
		{
			return;
		}
			
		inorder(temp->left);
	cout<<temp->data<<" ";
		inorder(temp->right);
	}
	node* findroot()
	{
		return root;
	}
};
int main()
{
	tree A;
	A.insert(5);
	A.insert(10);
	A.insert(20);
	A.insert(25);
	A.insert(4);
	A.insert(3);
	A.insert(2);
	A.insert(8);
	A.inorder(A.findroot());
}


