#include<iostream>
using namespace std;

struct student
{
    int roll;
    int age;
}stu;


int main(){
     //Structures in C++
    //struct student stu;
    struct student *ptr = &stu;
    ptr->age=20;
    ptr->roll=40;
    cout<<ptr->age<<" "<<ptr->roll;
     return 0;
}