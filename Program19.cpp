#include<iostream>
using namespace std;

int change(int *x)
{
	*x=7;
}

int main()
{
	int data=6;
	cout<<"Value of data:\t"<<data<<endl;

	change(&data);
	cout<<"Value of data:\t"<<data<<endl;
	return 0;
}
