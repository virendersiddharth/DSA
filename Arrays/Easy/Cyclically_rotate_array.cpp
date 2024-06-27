// Cyclically rotate by one

#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &v)
{
    int n = v.size();
    int temp = v[n-1];
    for(int i = n-1; i > 0; i--){
        v[i] = v[i-1];
    }
    v[0] = temp;
}

void print_array(vector<int> v){
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v = {9, 8, 7, 6, 4, 2, 1, 3};

    cout << "Before Cyclically Rotate : " << endl;
    print_array(v);

    rotate(v);

    cout << "After Cyclically Rotate : " << endl;
    print_array(v);

    return 0;
}