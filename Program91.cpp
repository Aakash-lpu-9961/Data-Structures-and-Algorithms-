#include<iostream>
using namespace std;

// Creating Data Type of Node 
struct node{
    int data;
    node *next;

    node(int x)
    {
        this->data = x;
        this->next = NULL;
    }
};

// Insertion at the  Head of the Node in Singly Linked List 
void insertAtHead(node* &head, int d)
{
    node* temp = new node(d);
    temp->next = head; 
    head = temp;
}

// Insertion at the End of the Node in Singly Linked List
void insertAtEnd(node* &head, node* &tail, int d)
{
    node* temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

// Insertion at the Middle at any position of the Singly Linked List
void insertAtPos(node* &head, node* &tail, int pos, int d)
{
    if (pos==1)
    {
        insertAtHead(head, d);
        return;
    }
    node* curr = head;
    int cnt = 1;
    while (cnt<pos-1)
    {
        curr = curr->next;
        cnt++;
    }
    node* temp = new node(d);
    temp->next = curr->next;
    curr->next = temp;
    
    if(curr->next == NULL)
    {
        insertAtEnd(head, tail, d);
        return;
    }
}


// Deletion of the any Node from the Singly Linked List
void delnod(node* &head, node* &tail, int pos)
{
    if (pos==1)
    {
        node* temp = head;
        head = head->next;
        temp->next =NULL;
        delete temp;
    }
    else
    {
        int cnt=1;
        node* curr = head;
        node* prev = NULL;
        
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        tail = prev;
    }
}

// Traversal across Nodes in Singly Linked List
void print(node* &head)
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

// Main Driver Function 
int main()
{
    node *head, *tail, *node1;
    
    // Creating the first node of linked list in the heap memory dynamically
    node1 = new node(10);
    head = node1;
    tail = node1;

    // Traversal across Nodes in Singly Linked List
    print(head);
    cout<<"\n";

    // Insertion at the  Head of the Node in Singly Linked List 
    insertAtHead(head,20);
    insertAtHead(head,60);
    insertAtHead(head,70);
    print(head);
    cout<<"\n";

    // Insertion at the End of the Node in Singly Linked List 
    insertAtEnd(head, tail, 30);
    insertAtEnd(head, tail, 40);
    insertAtEnd(head, tail, 50);
    print(head);
    cout<<"\n";

    // Insertion at the Middle at any position of the Singly Linked List
    insertAtPos(head, tail, 1, 80);
    print(head);
    cout<<"\n";

    insertAtPos(head, tail, 8, 90);
    print(head);
    cout<<"\n";

    insertAtPos(head, tail, 3, 110);
    print(head);
    cout<<"\n";

    insertAtPos(head, tail, 1, 10);
    print(head);
    cout<<"\n";

    // Deletion of the any Node from the Singly Linked List 
    delnod(head, tail, 1);
    print(head);
    cout<<"\n";

    delnod(head, tail, 4);
    print(head);
    cout<<"\n";

    delnod(head, tail, 9);
    print(head);
    cout<<"\n";

    delnod(head, tail, 8);
    print(head);
    cout<<"\n";


    // Printing the data of head node and tail node of Singly Linked List
    cout<<"\n";
    cout<<"Head Node Data: "<<head->data<<" "<<endl;
    cout<<"Tail Node Data: "<<tail->data<<" "<<endl;

    return 0;
}