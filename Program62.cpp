#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseString(string& str)
{// Aakash-lpu-9961 github.com
    int n = str.length();
    for (int i = 0; i < n/2; i++)
    {
        swap(str[i], str[n-i-1]);
    }
    // Aakash-lpu-9961 github.com
}

int main(){
     string str = "programming practice";
     reverseString(str);
     cout<<str;
     // Aakash-lpu-9961 github.com
     return 0;
}