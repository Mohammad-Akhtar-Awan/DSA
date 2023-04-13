#include<iostream>
using namespace std;

class BinaryTree{
	public:
		struct Node{
			int value;
			struct Node *left;
			struct Node *right;
		}*root;
	public:
		BinaryTree()
		{
			root = NULL;
		}
		void InsertNode(int num)
		{
			Node *newNode, *nodePtr;
			newNode = new Node;
			
			newNode->value = num;
			newNode->left = NULL;
			newNode->right = NULL;
			
			if(!root)
			{
				root = newNode;
				//cout<<"Insertion at Root...\n";
			}
			else
			{
				nodePtr = root;
				while(nodePtr != NULL)
				{
					if(num < nodePtr->value)
					{
						if(nodePtr->left)
						{
							nodePtr = nodePtr->left;
						}
						else
						{
							nodePtr->left = newNode;
							//cout<<"Insertion at Left...\n";
							break;
						}
					}
					else if(num > nodePtr->value)
					{
						if(nodePtr->right)
						{
							nodePtr = nodePtr->right;
						}
						else
						{
							nodePtr->right = newNode;
							//cout<<"Insertion at Right...\n";
							break;
						}
					}
					else
					{
						cout<<"Duplicate value...\n";
					}
				}
			}
		}
		void SearchNode(int num)
		{
			Node *nodePtr;
						
			if(!root)
			{
				cout<<"Binary Tree is Empty...\n";
			}
			else if(root->value == num)
			{
				cout<<"Value found at root : "<<num;
			}
			else
			{
				nodePtr = root;
				while(nodePtr->value != num)
				{
					if(num < nodePtr->value)
					{
						if(nodePtr->left)
						{
							nodePtr = nodePtr->left;
							if(nodePtr->value == num)
							{
								cout<<"Value found from left subtree : "<<num<<endl;
								break;
							}
						}
					}
					else if(num > nodePtr->value)
					{
						if(nodePtr->right)
						{
							nodePtr = nodePtr->right;
							if(nodePtr->value == num)
							{
								cout<<"Value found from right subtree : "<<num<<endl;
								break;
							}
						}
					}
					else
					{
						cout<<"Value not found...\n";
					}
				}
			}
		}
		void MinimumNode()
		{
			Node *nodePtr;
						
			if(!root)
			{
				cout<<"Binary Tree is Empty...\n";
			}
			else if(root->left == NULL)
			{
				cout<<"Minimum Value : "<<root->value<<endl;
			}
			else
			{
				nodePtr = root;
				while(nodePtr->left != NULL)
				{
					nodePtr = nodePtr->left;
					if(nodePtr->left == NULL)
					{
						cout<<"Minimum Value : "<<nodePtr->value<<endl;
						break;	
					}
				}
			}
		}
		void MaximumNode()
		{
			Node *nodePtr;
						
			if(!root)
			{
				cout<<"Binary Tree is Empty...\n";
			}
			else if(root->right == NULL)
			{
				cout<<"Maximum Value : "<<root->value<<endl;
			}
			else
			{
				nodePtr = root;
				while(nodePtr->right != NULL)
				{
					nodePtr = nodePtr->right;
					if(nodePtr->right == NULL)
					{
						cout<<"Maximum Value : "<<nodePtr->value<<endl;
						break;	
					}
				}
			}
		}
		void displayInOrder(Node *nodePtr)
		{
			if(nodePtr)
			{
				displayInOrder(nodePtr->left);
				cout<<nodePtr->value<<" ";
				displayInOrder(nodePtr->right);	
			}
		}
		void displayPreOrder(Node *nodePtr)
		{
			if(nodePtr)
			{
				cout<<nodePtr->value<<" ";
				displayPreOrder(nodePtr->left);
				displayPreOrder(nodePtr->right);	
			}
		}
		void displayPostOrder(Node *nodePtr)
		{
			if(nodePtr)
			{
				displayPostOrder(nodePtr->left);
				displayPostOrder(nodePtr->right);
				cout<<nodePtr->value<<" ";	
			}
		}
};
int main()
{
	BinaryTree BT;
	BT.InsertNode(10);
/*	BT.InsertNode(15);
	BT.InsertNode(7);
	BT.InsertNode(9);
	BT.InsertNode(2);
	BT.InsertNode(25);
	BT.InsertNode(17);*/
	//BT.InsertNode(5);
	//BT.InsertNode(15);
	
	//BT.displayPostOrder(BT.root);
	//BT.SearchNode(8);
	BT.MinimumNode();
	BT.MaximumNode();
}
