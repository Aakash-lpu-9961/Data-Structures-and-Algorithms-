#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> p1, p2, p3;
    p1 = make_pair(10, 20);
    p2 = make_pair(40, 50);
    p3 = make_pair(70, 80);

    cout << p1.first << " , " << p1.second << endl;
    cout << p2.first << " , " << p2.second << endl;
    cout << p3.first << " ' " << p3.second << endl;

    return 0;
}