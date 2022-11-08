#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *temp1 = new node;
    temp1->data = 20;
    temp1->next = NULL;
    head = temp1;
    cout << head->data<<endl;
    return 0;
}