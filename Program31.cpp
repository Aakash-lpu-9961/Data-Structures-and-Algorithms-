#include<iostream>
using namespace std;

int main()
{
    int *ptr = new int;

    cout<<"Enter the Number:"<<endl;
    cin>>*ptr;
    cout<<"Entered Number is:"<<" "<<*ptr<<endl;

    return 0;
}