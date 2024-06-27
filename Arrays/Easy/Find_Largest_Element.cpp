// #include <bits/stdc++.h>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;
int largestElement(vector<int> &arr, int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
