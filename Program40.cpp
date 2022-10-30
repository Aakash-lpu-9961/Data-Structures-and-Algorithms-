#include<iostream>
using namespace std;

struct abc
{
    int a;
    int b;
};

struct def
{
    int c;
    int d;
};

int main(){
    
    abc *ptr;
    abc obj;

    ptr = &obj;

    (*ptr).a = 20;
    (*ptr).b = 40;

    cout<<(*ptr).a<<" \t "<<(*ptr).b<<" "<<endl; 


    def *ptr1;
    def obj1;
    //ptr = &obj1; Not Possible
    ptr1 = &obj1;

    (*ptr1).c = 60;
    (*ptr1).d = 80;

    cout<<(*ptr1).c<<" \t "<<(*ptr1).d<<" "<<endl; 


    

     return 0;
}