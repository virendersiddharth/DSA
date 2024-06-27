// leetcode : 283

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    while (j < nums.size())
    {
        if (nums[j] == 0)
        {
            j++;
        }
        else if (nums[j] != 0)
        {
            swap(nums[i++], nums[j++]);
        }
    }
}