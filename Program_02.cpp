#include<iostream>
using namespace std;

int glo = 56;

void sum()
{
	//int glo=22;
	int a=5;
	int b=6;
	cout<<a<<" "<<b<<endl;
	cout<<"global is:"<<" "<<glo<<" "<<"from sum() function"<<endl;
}

int main()
{
//	int glo = 23;
	int a=1;
	int b=2;
	sum();
	cout<<a<<" "<<b<<endl;
	cout<<"gloabal is:"<<" "<<glo<<" "<<"from main() function"<<endl;
}
