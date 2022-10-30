#include<iostream>
using namespace std;

struct employee
{
	int eID;
	char favChar;
	long esal;
}aakash;

int main()
{
	//struct employee aakash;
	aakash.eID=1;
	aakash.favChar='C';
	aakash.esal=1200000000;
	
	cout<<aakash.eID<<endl;
	cout<<aakash.favChar<<endl;
	cout<<aakash.esal<<endl;
	
	return 0;
}
