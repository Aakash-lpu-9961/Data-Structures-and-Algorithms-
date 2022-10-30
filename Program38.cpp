#include<iostream>
using namespace std;

struct abc
{
    int x;
    int y;
    int z;

    abc()
    {
        cout<<"Constructor Invoked"<<endl;
    }

    ~ abc()
    {
        cout<<"Destructor Invoked"<<endl;
    }

    void set(int p, int q, int r)
    {
        x = p;
        y = q;
        z = r;
    }
    

    void display()
    {
        cout<<"Value of x is:"<<" "<<x<<endl;
        cout<<"Value of y is:"<<" "<<y<<endl;
        cout<<"Value of z is:"<<" "<<z<<endl;
    }
};


int main(){
    
    abc obj;

    obj.set(22, 58, 78);
    obj.display();

    /*
    obj.x = 56;
    obj.y = 65;
    obj.z = 95;
    */

    //cout<<obj.x<<" "<<obj.y<<" "<<obj.z<<" "<<endl;

     return 0;
}