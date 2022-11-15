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
    struct node *node2 = new node(20);
    struct node *node3 = new node(30);
    struct node *node4 = new node(40);

    node1->link = node2;
    node2->link = node3;
    node3->link = node4;

    head = node1;

    cout << head->data << "\t";        // 10
    cout << node1->link->data << "\t"; // 20
    cout << node2->link->data << "\t"; // 30
    cout << node3->link->data << "\t"; // 40

    return 0;
}