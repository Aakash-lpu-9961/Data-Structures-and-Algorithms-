#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;

    Node(int x)
    {
        data = x;
        link =  NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->link = head;
    head = temp;
}

void print(Node* &head)
{
    Node* temp;
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main()
{
    struct Node *head;
    head = new Node(10);
    print(head);
    cout<<"\n"<<endl;

    insertAtHead(head,20);
    print(head);
    cout<<"\n"<<endl;

    insertAtHead(head, 30);
    print(head);
    cout<<"\n"<<endl;

    insertAtHead(head, 40);
    print(head);
    cout<<"\n"<<endl;

    insertAtHead(head, 50);
    print(head);
    cout<<"\n"<<endl;

    insertAtHead(head, 60);
    print(head);
    cout<<"\n"<<endl;

    insertAtHead(head, 70);
    print(head);
    cout<<"\n"<<endl;

    insertAtHead(head, 80);
    print(head);
    cout<<"\n"<<endl;

    insertAtHead(head, 90);
    print(head);
    cout<<"\n"<<endl;
    
    return 0;
}