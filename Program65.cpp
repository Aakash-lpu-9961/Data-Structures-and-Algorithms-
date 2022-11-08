#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head;

    struct node *temp1 = new node;
    struct node *temp2 = new node;
    struct node *temp3 = new node;
    struct node *temp4 = new node;
    struct node *temp5 = new node;

    temp1->data = 20;
    temp1->link = temp2;

    temp2->data = 40;
    temp2->link = temp3;

    temp3->data = 60;
    temp3->link = temp4;

    temp4->data = 80;
    temp4->link = temp5;

    temp5->data = 100;
    temp5->link = NULL;

    head = temp1;

    //cout << temp1->link->link->link->link->data;
    //cout<<head->link->data;
    cout<<head->link->link->link->link->data;

    /*cout<<temp1->data<<endl;
    cout<<temp2->data<<endl;*/

    return 0;
}