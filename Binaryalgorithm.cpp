#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(34);
    v.push_back(6);

    sort(v.begin(), v.end());
    cout << "Finding 6"<< endl<< binary_search(v.begin(), v.end(), 6) << endl;

    cout << "lower_bound " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    cout << "upper_bound " << upper_bound(v.begin(), v.end(), 6)-v.begin() << endl;

}
