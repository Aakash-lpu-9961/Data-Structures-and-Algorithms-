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
int main()
{
    struct node *head;

    struct node *node1 = new node(10);
    //node(10);

    struct node *node2 = new node(20);
    //node(20);

    node1->link = node2;
    node2->link = node2;

    head = node1;

    cout << head->link->data;
}
