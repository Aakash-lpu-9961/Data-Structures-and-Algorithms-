#include<iostream>
using namespace std;

int main()
{
    // Pointer to Pointer 
    int b;
    b = 10;

    int* a; 
    a = &b;

    int ** c;
    c = &a;

    int*** d;
    d = &c;

    cout<<"Value of a:"<<" "<<*a<<endl;
    cout<<"Value of c:"<<" "<<**c<<endl;
    cout<<"Value of d:"<<" "<<***d<<endl;

    return 0;
}