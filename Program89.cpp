#include <iostream>
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
void insertAtMiddle(node *&head, int position, int d)
{
    node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->link;
        cnt++;
    }

    node* insert = new node(d);

    insert->link = temp->link;

    temp->link = insert;
}

void insertAtTail(node* &tail, int d)
{
    node *temp = new node(d);
    tail->link = temp;
    tail = temp;
}

void print(node *&head)
{
    node *curr;
    curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->link;
    }
    cout << " " << endl;
}

int main()
{
    struct node *node1, *head, *tail;
    node1 = new node(10);
    head = node1;
    tail = node1;

    cout<<"\n"<<endl;
    
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);
    insertAtTail(tail, 70);
    insertAtTail(tail, 80);


    print(head);

    cout<<"\n"<<endl;

    insertAtMiddle(head, 4, 40);
    print(head);

    return 0;
}
