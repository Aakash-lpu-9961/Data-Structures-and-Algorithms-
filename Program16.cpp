#include<iostream>
using namespace std;

int moneyRecieved(int currentMoney, float facotr=1.04)
{
	return currentMoney*factor;
}

int main()
{
	int money;
	cout<<"Enter the money you have:"<<endl;
	cin>>money;
	
	//moneyRecieved(money, 1.01);
	
	cout<<"total money after certain peoriod by normal people is:\t"<<moneyRecieved(money, 1.01)<<"\tand by vips is:\t"<<moneyRecieved(money)<<endl;
}
