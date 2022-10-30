#include<iostream>
using namespace std;

int glo=95;

void fun()
{
	int a=56;
	cout<<"a is:\t"<<a<<endl;
}

int main()
{
	int glo=5;
	int a=57;
	cout<<"a is:\t"<<a<<endl;
	fun();
	cout<<"glo inside:\t"<<glo<<endl;
	cout<<"glo outside:\t"<<::glo<<endl;
}
