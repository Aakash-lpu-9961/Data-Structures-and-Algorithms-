#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

int main(){
     struct node* head;
     head = new node(10);
     return 0;
}