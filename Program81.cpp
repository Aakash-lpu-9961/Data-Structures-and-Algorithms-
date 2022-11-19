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
int main()
{
    node *head = new node(20);
    cout << head->data << " " << endl;
    cout << head->link << " " << endl;

    node *curr = head;
    cout << curr->data << " " << endl;
    cout << curr->link << "  " << endl;

    return 0;
}