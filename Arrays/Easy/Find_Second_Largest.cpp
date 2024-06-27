#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;
int getSecondLargest(vector<int> &a, int n)
{
    int largest = a[0];
    int slargest = INT_MIN;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (slargest < a[i] && a[i] != largest)
        {
            slargest = a[i];
        }
    }
    return slargest;
}

int getSecondSmallest(vector<int> &a, int n)
{
    int smallest = a[0];
    int ssmallest = INT_MAX;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < ssmallest && a[i] != smallest)
        {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    int secondLargest = getSecondLargest(a, n);
    int secondSmallest = getSecondSmallest(a, n);

    vector<int> ans;
    ans.push_back(secondLargest);
    ans.push_back(secondSmallest);

    return ans;
}
