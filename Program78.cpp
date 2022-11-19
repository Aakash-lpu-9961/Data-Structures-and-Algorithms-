#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Function for inserting the node at the beginning of the linked list
node *insertBegin(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}

// Function to traverse a linked list
void printlist(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    node *head = NULL;
    head = insertBegin(head, 30);
    head = insertBegin(head, 40);
    head = insertBegin(head, 50);
    head = insertBegin(head, 60);
    head = insertBegin(head, 70);
    head = insertBegin(head, 80);
    head = insertBegin(head, 90);
    head = insertBegin(head, 100);

    printlist(head);

    return 0;
}