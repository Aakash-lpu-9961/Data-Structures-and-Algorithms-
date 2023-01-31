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

void insertAtTail(node* &tail, int d)
{
    node *temp = new node(d);
    tail->link = temp;
    tail = temp;
}

void print(node* &head)
{
    node* curr;
    curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->link;
    }
    cout<<" "<<endl;
}


int main()
{
    node *node1;

    node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    
    print(tail);
    cout<<"\n"<<endl;

    insertAtTail(tail, 20);
    print(head);
    cout<<"\n"<<endl;

    insertAtTail(tail, 30);
    print(head);
    cout<<"\n"<<endl;

    insertAtTail(tail, 40);
    print(head);
    cout<<"\n"<<endl;

    insertAtTail(tail, 50);
    print(head);
    cout<<"\n"<<endl;

    return 0;
}