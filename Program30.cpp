#include<iostream>
using namespace std;

struct abc
{
    int x;
    int y;
};
int main()
{
    struct abc obj;
    struct abc *ptr = &obj;

    cout<<"Enter:\t"<<endl;
    cin>>obj.x;
    cin>>obj.y;

    cout<<(ptr->x)<<"\t"<<(ptr->y)<<endl;

    return 0;
}
