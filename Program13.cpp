#include<iostream>
using namespace std;

//Function Prototype
int sum(int x, int y, int z);


int main()
{
	int a;
	int b;
	int c;

	cout<<"Enter Value of a:\t";
	cin>>a;

	cout<<"Enter value of b:\t";
	cin>>b;

	cout<<"Enter value of c:\t";
	cin>>c;

	sum(a, b, c);

	cout<<"Sum of entere number is:\t"<<sum(a, b, c)<<endl;
}


int sum(int x, int y, int z)
{
	int total = (x + y + z);

	return total;
}
