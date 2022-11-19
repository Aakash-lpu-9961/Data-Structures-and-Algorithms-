#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
node *insertBegin(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}
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

    printlist(head);

    return 0;
}