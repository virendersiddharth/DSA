#include<iostream>
#include<vector>
using namespace std;

void move_neg_one_side(vector<int>& arr){
    int i = 0;
    int j = arr.size() - 1;

    while(i<= j){
        if(arr[i] < 0){
            i++;
        }
        else if(arr[j] > 0){
            j--;
        }
        else if(arr[i] > 0 && arr[j] < 0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

void print_array(vector<int>& arr){
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
}
int main(){
    vector<int> arr = {-1,1,3,5,-1,-4,8,9,-2,5};

    cout << "Before Arrainging : " << endl;
    print_array(arr);

    move_neg_one_side(arr);

    cout << "After Arrainging : " << endl;
    print_array(arr);
    return 0;
}