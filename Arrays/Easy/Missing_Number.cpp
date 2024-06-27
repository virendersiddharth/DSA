// leetcode : 268
#include <vector>
#include <numeric>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int arraySum = accumulate(nums.begin(), nums.end(), 0);
    int n = nums.size();
    int actualSum = n * (n + 1) / 2;
    return actualSum - arraySum;
}