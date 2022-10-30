// Function Pointer in C++

#include<iostream>
using namespace std;

int add(int x, int y)
{
    return (x+y);
}

int mul(int x, int y)
{
    return (x*y);
}

int sub(int x, int y)
{
    return (x-y);
}

int main(){
    int result;
    int (*ptr)(int, int);
    

    ptr = add;
    result = ptr(10, 20);
    cout<<result<<endl;

    ptr = mul;
    result = ptr(10, 20);
    cout<<result<<endl;

    ptr = sub;
    result = ptr(20, 10);
    cout<<result<<endl;


    return 0;
}