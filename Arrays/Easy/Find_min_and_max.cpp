#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

pair<int, int> find_min_and_max(vector<int> & arr){
    int min = *min_element(arr.begin(), arr.end());
    int max = *max_element(arr.begin(), arr.end());
    return make_pair(min, max);
}
int main(){
    vector<int> arr = {25,14,25,36,15,48,68,45,45,35};
    
    pair<int,int> p = find_min_and_max(arr);

    cout << "Min Element: " << p.first << endl;
    cout << "Max Element: " << p.second << endl;

    return 0;
}
