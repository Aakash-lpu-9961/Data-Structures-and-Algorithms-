#include<iostream>
using namespace std;
int add(int x, int y, int z);
int mul(int p, int q, int r);

int main(){
     int result;
     int result1;

     int(*fun)(int, int, int);
     
     fun = add;
     result = fun(10, 20, 30);
     cout<<result;

    cout<<"\n"<<endl;

     fun = mul;
     result1 = fun(10, 20, 30);
     cout<<result1;

     return 0;
}

int add(int x, int y, int z)
{
    return x+y+z;
}
int mul(int p, int q, int r)
{
    return p*q*r;
}