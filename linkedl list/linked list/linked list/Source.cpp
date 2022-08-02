#include<iostream>

using namespace std;

class node
{
public:
	int data;
	node* next;
};

void addatend(node* head, int val)
{
	node* temp = new node();
	if (head->next == NULL)
	{
		temp->data = val;
		head->next = temp;
		temp->next = NULL;
		cout << "node added"<<endl;
	}
	else
	{
		//temp = head;
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = temp;
		temp->data = val;
		temp->next = NULL;
		cout << "node added"<<endl;
	}
}

void display(node* head)
{
	cout << "displaying nodes"<<endl;
	while (head->next != NULL)
	{
		cout << head->data<<" ";
		head = head->next;
	}
	cout << head->data;
	cout << endl;
}

void addatk(node* head, int k, int val)
{
	node* temp = new node();
	for (int i = 0; i < k-2; i++)
	{
		head = head->next;
	}
	node* t = new node();
	t->next = head->next->next;
	temp->data = val;
	temp->next = t->next;
	head->next = temp;
	temp->next = t->next;
	cout << "node added"<<endl;
}

void deletenode(node* head,int k)
{
	//node* temp = new node();
	for (int i = 0; i < k - 2; i++)
	{
		head = head->next;
	}
	head->next = head->next->next;
	cout << "node deleted" << endl;
}

node* rev(node* head)
{
	node* temp1 = new node();
	node* temp2 = new node();
	node* temp3 = new node();
	temp1 = NULL;
	temp2 = head;
	temp3 = temp2->next;

	while (temp2 != NULL)
	{
		temp2->next = temp1;
		temp1 = temp2;
		temp2 = temp3;
		if (temp2 == NULL)
			break;
		temp3 = temp2->next;

	}

	cout << "linked list reversed" << endl;
	return temp1;
	
}

node* mid(node* head)
{
	node* slow = new node();
	node* fast = new node();

	slow = head;
	fast = head->next;

	while (fast != NULL)
	{
		slow = slow->next;
		fast = fast->next;
		if (fast == NULL)			
		{
			break;				// in case of even no of nodes
		}
		
		fast = fast->next;		//odd case
									
	}

	return slow;
}

void removeNfrombacc(node* head, int n)
{
	node* slow = new node();
	node* fast = new node();

	slow = head;
	fast = head;

	for (int i = 0; i <= n; i++)
	{
		fast = fast->next;
		cout << "fast ka data" << fast->data<<endl;
	}
	while (fast != NULL)
	{
		slow = slow->next;
		fast = fast->next;
	}
	slow->next = slow->next->next;
	cout << "node N from end deleted " << endl;
}

node* getnode(node* head, int n)                // travverse to a node
{
	while (head -> data != n)
	{
		head = head->next;
	}
	return head;
}

void delwithnode(node* n)								// delete node without head instead the node itself is given
{
	//node* temp = new node();
	//temp = n;
	while (1)
	{
		n->data = n->next->data;
		if (n->next != NULL)
			break;
		n = n->next;
	}
	n->next = n->next->next;
}

node* findintersection(node* head1, node* head2)
{
	while (head2 != NULL)
	{										// i still dont know why we have to iterate through temp 
		node* temp = head1;
		while (temp != NULL)
		{
			if (temp == head2)
			{
				return head2;
			}
			else
			{
				temp = temp ->next;
			}
		}
		head2 = head2->next;
	}

}

int main()
{
	node* head=new node();
	head->data = 0;
	head->next = NULL;
	addatend(head,1);
	addatend(head, 2);
	addatend(head, 3);
	addatend(head, 4);
	display(head);
	
	node* head1 = new node();          //linked list intersection 
	head1 = head;
	head = head->next->next;
	node* head2 = new node();
	node* tmp = new node();				// use temp variabales to assign otherwise its fkd :)  
	tmp->next = NULL;
	addatend(tmp, 100);
	head2 = tmp;
	tmp->next->next = head;
	
	

	//addatk(head, 2, 9);
	//display(head);

	//deletenode(head,3);
	//display(head);

	//head = rev(head);
	//display(head);

	//head = mid(head);
	//display(head);

	//removeNfrombacc(head, 2);
	//display(head);

	//node * x = getnode(head, 2);
	//delwithnode(x);
	//display(head);

	display(head2);
	node* intersection = new node();
	intersection =findintersection(head1, head2);
	display(intersection);


	return 0;
}