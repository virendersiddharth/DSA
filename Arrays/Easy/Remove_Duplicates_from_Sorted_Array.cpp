// LeetCode : 26

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    while (j < nums.size())
    {
        if (nums[i] == nums[j])
        {
            j++;
        }
        else
        {
            nums[++i] = nums[j++];
        }
    }
    return i + 1;
}