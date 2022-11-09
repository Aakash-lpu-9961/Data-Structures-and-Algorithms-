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

    struct node *temp1 = new node(10);
    struct node *temp2 = new node(20);
    struct node *temp3 = new node(30);
    struct node *temp4 = new node(40);
    struct node *temp5 = new node(50);


    temp1->link = temp2;
    temp2->link = temp3;
    temp3->link = temp4;
    temp4->link = temp5;

    head = temp1;

    cout << head->link->data;

    return 0;
}