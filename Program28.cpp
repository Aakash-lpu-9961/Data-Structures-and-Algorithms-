#include<iostream>
using namespace std;

struct student
{
    int x;
    int y;
};


int main()
{
    struct student stu;
    stu.x=56;
    stu.y=69;
    
    cout<<stu.x<<endl;
    cout<<stu.y<<endl;

    return 0;
}