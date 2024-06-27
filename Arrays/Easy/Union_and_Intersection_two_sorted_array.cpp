// Union and Intersection

#include<iostream>
#include<vector>

using namespace std;

// Function to find Union
vector<int> Union(vector<int> v1, vector<int> v2){
    int size1 = v1.size();
    int size2 = v2.size();

    vector<int> v3;
    
    int i = 0;
    int j = 0;

    while(i<size1 && j < size2){
        if(v1[i] < v2[j]){
            v3.push_back(v1[i++]);
        }
        else if(v1[i] > v2[j]){
            v3.push_back(v2[j++]);
        }
        else if(v1[i] == v2[j]){
            v3.push_back(v2[j]);
            i++; j++;
        }
    }

    while(i< size1){
        v3.push_back(v1[i++]);
    }
    while(j< size2){
        v3.push_back(v2[j++]);
    }

    return v3;
}

// Function to find Intersection
vector<int> Intersection(vector<int> v1, vector<int> v2){
    int i = 0;
    int j = 0;
    int size1 = v1.size();
    int size2 = v2.size();
    vector<int> v3;

    while(i < size1 && j < size2){
        if(v1[i] < v2[j]){
            i++;
        }
        else if(v1[i] > v2[j]){
            j++;
        }
        else if(v1[i] == v2[j]){
            v3.push_back(v1[i]);
            i++; j++;
        }
    }
    return v3;
}

void print_array(vector<int> v){
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
}
int main(){
    vector<int> arr1 = {1,3,5,6,7,9,10};
    vector<int> arr2 = {2,3,5,8,12,15};

    vector<int> ans = Union(arr1, arr2);

    cout << "Union : " << endl;
    print_array(ans);

    ans = Intersection(arr1, arr2);
    cout << "Intersection : " << endl;
    print_array(ans);

    return 0;
}