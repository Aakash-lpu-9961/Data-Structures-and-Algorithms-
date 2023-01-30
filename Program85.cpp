#include<iostream>
using namespace std;

struct node
{
	int data;
	node *link;
	
	node(int x)
	{
		data = x;
		link = NULL;
	}
};

int main()
{
	node *head = new node(10);
	head->link = new node(20);
	head->link->link = new node(30);
	
	cout<<head->data<<endl;
	cout<<head->link<<endl;
	return 0;
}
