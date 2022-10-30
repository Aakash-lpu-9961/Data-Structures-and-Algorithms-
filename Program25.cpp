#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int &value=a;
	
	int &value1=value;
	int &value2=value1;
	int &value3=value2;
	int &value4=value3;
	int &value5=value4;
	
	
	cout<<value5;
	
	return 0;
}
