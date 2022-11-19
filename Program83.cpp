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
node *delnod(node *head)
{
    if (head == NULL)
        return NULL;
    else
    {
        node *temp = head->next;
        delete head;
        return temp;
    }
}
int main()
{
    int x;
    node *head;
    head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);

    cout << "Enter Value of node to insert:"
         << " ";
    cin >> x;

    head = insertBegin(head, x);
    delnod(head);
    printlist(head);
    
    //printlist(head);
    return 0;
}