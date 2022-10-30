#include<iostream>
using namespace std;
char toss (char state, int n)
{  //aakash-lpu-9961 - - github ::3sec ago
	if(n%2 == 0)
	{
		return state;
	}
	else if(n%2 !=0 && state == 'H')
	{
		return 'T';
	}
	else if(n%2 !=0 && state == 'T')
	{
		return 'H';
	}
}
int main()
{
	//aakash-lpu-9961 - - github ::3sec ago
	char state;
	int n;
	char ans;

	cout<<"State:";
	cin>>state;
	cout<<"No of flips:";
	cin>>n;
	
	//aakash-lpu-9961 - - github ::3sec ago

	ans = toss(state, n);
	cout<< ans<<endl;
	return 0;
}
