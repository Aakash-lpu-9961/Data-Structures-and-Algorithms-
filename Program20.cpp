#include<iostream>
using namespace std;

int main()
{
	int n;
	register int fact=1;
	
	cout<<"Enter no:\t";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		
		fact=i*fact;
		
	}
	cout<<fact;
	
	return 0;
}
