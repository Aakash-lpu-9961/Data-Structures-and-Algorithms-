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
node *insertEnd(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        return temp;
    }
    node *curr = head;
    while (curr->link != NULL)
    {
        curr = curr->link;
    }
    curr->link = temp;
    return head;
}
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
    node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 50);
    head = insertEnd(head, 70);
    head = insertEnd(head, 90);

    printlist(head);

    return 0;
}
