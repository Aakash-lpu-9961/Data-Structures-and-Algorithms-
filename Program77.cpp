#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
    node(int x)
    {
        data = x;
        link = NULL;
    }
};
void printlist(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->link;
    }
}
int main()
{
    //struct node *head;
    struct node *head = new node(10);

    head->link = new node(20);
    head->link->link = new node(30);
    head->link->link->link = new node(40);
    head->link->link->link->link = new node(50);
    head->link->link->link->link->link = new node(60);

    printlist(head);

    return 0;
}