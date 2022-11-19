#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 2};
    sort(nums.begin(), nums.end());
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        auto it = nums.begin() + 1;
        while (it != nums.end())
        {
            if (nums[*i] == *it)
            {
                nums.erase(it);
            }
            it++;
        }
    }
    cout << nums.size();

    return 0;
}