#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int find_kth_min(vector<int>& arr, int k){
    priority_queue<int> p;
    for(int i = 0; i< k; i++){
        p.push(arr[i]);
    }
    for(int i = k; i < arr.size(); i++){
        if(arr[i] < p.top()){
            p.pop();
            p.push(arr[i]);
        }
    }

    return p.top();
}

int find_kth_max(vector<int>& arr, int k){
    priority_queue<int, vector<int>, greater<int> > p;
    for(int i = 0; i< k; i++){
        p.push(arr[i]);
    }
    for(int i = k; i < arr.size(); i++){
        if(arr[i] > p.top()){
            p.pop();
            p.push(arr[i]);
        }
    }

    return p.top();
}


int main(){

    vector<int> arr = {11,25,47,84,59,75,68,114,23,35,96,68};
    int k = 4;
    int min = find_kth_min(arr, k);
    int max = find_kth_max(arr, k);

    cout << "Min : " << min << endl;
    cout << "Max : " << max << endl;

    return 0;
}