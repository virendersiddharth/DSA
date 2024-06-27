#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossSol(vector<long long int> v, long long int k, long long int mid){
    long long int totalWood = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] > mid){
            totalWood += v[i] - mid;
        }
    }

    return totalWood >= k;
}

int main(){
    long long int n;
    long long int k;
    vector<long long int> v;
    cin >> n >> k;
    while(n--){
        long long int val;
        cin >> val;
        v.push_back(val);
    }

    long long int s = 0;
    long long int e = *max_element(v.begin(), v.end());
    long long int ans = -1;

    while(s<=e){
        long long int mid = s + (e-s)/2;
        if(isPossSol(v, k,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}