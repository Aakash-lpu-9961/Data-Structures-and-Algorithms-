#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(9);
    v.push_back(21);
    v.push_back(18);

    for (auto x : v)
        cout << x << " ";

    sort(v.begin(), v.end());
    cout << endl;

    for (auto x : v)
        cout << x << " ";
}