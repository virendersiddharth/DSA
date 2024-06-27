// find Largest sum contiguous Subarray [V. IMP]

// Kadane's algorithm 
#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& v){
    int sum = 0;
    int i = 0;
    int maxSum = 0;
    while(i< v.size()){
        sum += v[i++];
        if(sum < 0){
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum > 0 ? maxSum : -1;
} 

int main(){
    vector<int> v = {-1,-2,-3,-4};

    cout << "Result : " << maxSubArray(v) << endl;
    return 0;
}