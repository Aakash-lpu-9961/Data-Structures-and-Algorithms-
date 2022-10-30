#include<iostream>
using namespace std;

struct abc
{
    int x;
    int y;
};

int main(){
    
    struct abc obj;
    obj.x = 110;
    obj.y = 220;

    cout<<"Value of x is:"<<" "<<obj.x<<endl;
    cout<<"Value of y is:"<<" "<<obj.y<<endl;
    
    return 0;
}