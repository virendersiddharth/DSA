// leetcode : 485

#include <vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int temp = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            temp++;
            ans = max(ans, temp);
        }
        else
        {
            temp = 0;
        }
    }
    return ans;
}