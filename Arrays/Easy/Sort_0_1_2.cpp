#include<iostream>
#include<vector>
using namespace std;

void print_array(vector<int>& arr){
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout << endl;
}

void sort_zero_one_two(vector<int>&arr){
    int l = 0;
    int m = 0;
    int h = arr.size()-1;

    while(m<=h){
        if(arr[m] == 0){
            swap(arr[l++],arr[m++]);
        }
        else if(arr[m] == 1){
            m++;
        }
        else if(arr[m] == 2){
            swap(arr[m],arr[h--]);
        }
    }
}

int main(){
    vector<int> arr = {0,1,2,0,0,2,0,2,1,0,1,1,0,2,0,1};

    cout << "Before sorting : " << endl;
    print_array(arr);

    sort_zero_one_two(arr);

    cout << "After Sorting : " << endl;
    print_array(arr);


    return 0;
}