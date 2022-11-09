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
int main()
{
    struct node *head; // Head Pointer

    // Dynamic Memory Allocation
    struct node *temp1 = new node(10);
    struct node *temp2 = new node(20);
    struct node *temp3 = new node(30);
    struct node *temp4 = new node(40);

    // Nodes Linking to each node

    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;

    // Assigning the head pointer to node1

    head = temp1;

    cout << head->next->data;
    return 0;
}