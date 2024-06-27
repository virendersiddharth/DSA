#include<iostream>
#include<vector>
using namespace std;

void reverse_array(vector<int>& arr){
    int i = 0;
    int j = arr.size()-1;
    while(i<=j){
        swap(arr[i++], arr[j--]);
    }
}

void print_array(vector<int>& arr){
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    cout << "Before Reverse" << endl;
    print_array(arr);
    
    reverse_array(arr);

    cout << "After Reverse" << endl;
    print_array(arr);
}