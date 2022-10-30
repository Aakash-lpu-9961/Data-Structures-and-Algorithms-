#include<iostream>
using namespace std;

struct abc
{
    int a;
    int b;
};

int main(){
    abc obj[3];

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter value of a:";
        cin>>obj[i].a;

        cout<<"Enter value of b:";
        cin>>obj[i].b;

        cout<<"\n"<<endl;

    }

    for (int i = 0; i < 3; i++)
    {
        cout<<"Value of a:";
        cout<<obj[i].a<<endl;

        cout<<"Value of b:";
        cout<<obj[i].b<<endl;

        cout<<"\n"<<endl;

    }
    
    

     return 0;
}