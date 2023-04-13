#include<iostream>
using namespace std;

class LinkedList
{
	private:
		struct LinkedListNode
		{
			int value;						//Data Member
			struct LinkedListNode *next;	//Pointer	
		};
		LinkedListNode *head;				//Head
	public:
		LinkedList(void);
		//~LinkedList(void);
		void AppendNode(int);
		void InsertNode(int);
		void SpecificInsertNode(int,int);
		void DeleteNode(int);
		void DisplayList(void);
		void RemoveFromHead(void);
		void RemoveFromTail(void);
		int LinkedListSize(void);
		bool SearchNode(int);
		void SearchResult(int);
		void SwapData(int, int);
};
LinkedList :: LinkedList()
{
	head = NULL;
}
void LinkedList :: AppendNode(int num)		//50
{
	LinkedListNode *newNode, *nodePtr;
	newNode = new LinkedListNode;
	newNode->value = num;					//50
	newNode->next = NULL;					//NULL
	
	if(!head)								//False because head = 10
	{
		head = newNode;						//head = 10
	}
	else
	{
		nodePtr = head;						//nodePtr = 10
		while(nodePtr->next != NULL)		//True
		{
			nodePtr = nodePtr->next;		//nodePtr = 40
		}
		nodePtr->next = newNode;
	}
}
void LinkedList :: InsertNode(int num)		//num = 35
{
	LinkedListNode *newNode, *nodePtr, *preNode;
	newNode = new LinkedListNode;
	newNode->value = num;					//35
	newNode->next = NULL;					//NULL
	preNode = NULL;							//NULL
	
	if(!head)								
	{
		head = newNode;						
	}
	else
	{
		nodePtr = head;						
		while(nodePtr->next != NULL && nodePtr->value < num)		
		{
			preNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if(preNode == NULL)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			preNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}
void LinkedList :: SpecificInsertNode(int num,int location)		//num = 35
{
	LinkedListNode *newNode, *nodePtr, *preNode;
	newNode = new LinkedListNode;
	newNode->value = num;					//35
	newNode->next = NULL;					//NULL
	preNode = NULL;							//NULL
	
	if(!head)								
	{
		head = newNode;						
	}
	else
	{
		nodePtr = head;						
		while(nodePtr->next != NULL && nodePtr->value <= location)		
		{
			preNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if(preNode == NULL)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			preNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}
void LinkedList :: DeleteNode(int num)
{
	LinkedListNode *nodePtr, *preNode;
	if(!head)
	{
		cout<<"List is already empty...";
	}
	else if(head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;
		while(nodePtr != NULL && nodePtr->value != num)
		{
			preNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		preNode->next = nodePtr->next;
		delete nodePtr;
	}
	
}
void LinkedList :: RemoveFromHead()
{
	if(head == NULL)
		cout<<"List is empty...";
		
	LinkedListNode *nodePtr;
	nodePtr = head->next;
	delete head;
	head = nodePtr;
}
void LinkedList :: RemoveFromTail()
{
	LinkedListNode *nodePtr, *preNode;
	if(head == NULL)
		cout<<"List is empty...";
	else
	{
		nodePtr = head;
		while(nodePtr->next != NULL)
		{
			preNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		preNode->next = NULL;
		delete nodePtr;
	}
	
}
void LinkedList :: DisplayList()
{
	LinkedListNode *nodePtr;
	nodePtr = head;
	cout<<head<<endl;
	while(nodePtr)
	{
		cout<<"Value : "<<nodePtr->value<<", Address : "<<nodePtr<<" & Address of next : "<<nodePtr->next<<endl;
		nodePtr = nodePtr->next;	
	}
}
int LinkedList :: LinkedListSize()
{
	int count = 0;
	LinkedListNode *nodePtr;
	
	nodePtr = head;
	while(nodePtr != NULL)
	{
		count++;
		nodePtr = nodePtr->next;
	}
	return count;
}
bool LinkedList :: SearchNode(int num)
{
	LinkedListNode *nodePtr;
	nodePtr = head;
	
	while(nodePtr != NULL)
	{
		if(nodePtr->value == num)
		{
			return true;
		}
		nodePtr = nodePtr->next;
	}
}
void LinkedList :: SearchResult(int num)
{
	int result = SearchNode(num);
	
	if(result == 1)
	{
		cout<<"Available in linked list...";
	}
	else
	{
		cout<<"Not Available in linked list...";
	}
}
void LinkedList :: SwapData(int num1, int num2)
{
	LinkedListNode *nodePtr,*Val1, *Val2, *Temp;
	nodePtr = head;
	while(nodePtr->next != NULL && nodePtr->value != num1)
	{
		nodePtr = nodePtr->next;
	}
	if(nodePtr->value == num1)
	{
		Val1 = nodePtr;
		//cout<<Val1->value;
	}
	else
	{
		cout<<"Value not found...";
	}
	
	nodePtr = head;
	while(nodePtr->next != NULL && nodePtr->value != num2)
	{
		nodePtr = nodePtr->next;
	}
	if(nodePtr->value == num2)
	{
		Val2 = nodePtr;
		//cout<<Val2->value;
	}
	else
	{
		cout<<"Value not found...";
	}
	Temp = Val1;
	Val1 = Val2;
	Val2 = Temp;
	
	cout<<Val1->value<<", Address : "<<Val1<<" & "<<Val2->value<<", Address : "<<Val2<<endl;	
}
int main()
{
	LinkedList LL;
	LL.AppendNode(10);
	LL.AppendNode(20);
	LL.AppendNode(30);
	LL.AppendNode(40);
	LL.AppendNode(50);
	LL.InsertNode(25);
	
	LL.DisplayList();
	LL.SwapData(20,40);
	LL.DisplayList();
	//LL.SearchResult(26);
	
	//cout<<"\n------------------------------\n=> Number of Elements in Linked List : "<<LL.LinkedListSize();
}
