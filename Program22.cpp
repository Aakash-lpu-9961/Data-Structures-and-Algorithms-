#include<iostream>
using namespace std;

int swap(int *x, int*y)
{
	int temp;
	temp= *x;
	*x=*y;
	*y=temp;
}

int main()
{
	int a=45;
	int b=65;
	cout<<"Value of a and b is:\t"<<a<<"\t"<<b<<endl;
	swap(&a,&b);
	cout<<"Value of a and b is:\t"<<a<<"\t"<<b;
	return 0;
}
