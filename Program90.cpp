#include <iostream>
using namespace std;

// Construction of Node Data Type of Singly-Linked List
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

// Insertion of Node in Singly-Linked List at End
void insertAtEnd(node *&tail, int d)
{
    node *temp;
    temp = new node(d);
    tail->link = temp;
    tail = temp;
}

// Insertion of Node in Singly-Linked List at Head
void insertAtHead(node *&head, int d)
{
    node *temp;
    temp = new node(d);
    temp->link = head;
    head = temp;
}

// Insertion of Node in Singly-Linked List at any Position
void insertAtPosition(node *&head, node *&tail, int pos, int d)
{
    // Inserting at First Node
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }

    // Inserting at any Middle Position
    node *temp;
    temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->link;
        cnt++;
    }

    // Inserting at Last Position
    if (temp->link == NULL)
    {
        insertAtEnd(tail, d);
        return;
    }

    node *insert = new node(d);
    insert->link = temp->link;
    temp->link = insert;
}

// Traversal of Singly-Linked List
void print(node *&head)
{
    node *curr;
    curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->link;
    }
}

// Implementation of Singly-Linked List
int main()
{
    node *head, *tail, *node1;
    node1 = new node(10);
    head = node1;
    tail = node1;
    cout << "\n";


    cout << "Insertion at Head of Singly-Linked List" << endl;

    insertAtEnd(tail, 20);
    insertAtEnd(tail, 30);
    insertAtEnd(tail, 40);
    insertAtEnd(tail, 50);
    print(head);
    cout << "\n"<<endl;

    cout << "Insertion at Head of Singly-Linked List" << endl;

    insertAtHead(head, 60);
    insertAtHead(head, 70);
    insertAtHead(head, 80);
    insertAtHead(head, 90);
    print(head);
    cout << "\n"<<endl;

    cout<<"Insertion of Node at any Position in Singly-Linked List"<<endl;

    insertAtPosition(head, tail, 3, 100);
    print(head);
    cout << "\n"<<endl;

    insertAtPosition(head, tail, 1, 110);
    print(head);
    cout << "\n"<<endl;

    insertAtPosition(head, tail, 12, 120);
    print(head);
    cout << "\n"<<endl;

    insertAtPosition(head, tail, 13, 150);
    print(head);
    cout << "\n"<<endl;

    insertAtPosition(head, tail, 14, 190);
    print(head);
    cout << "\n"<<endl;

    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    return 0;
}
