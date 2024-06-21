#include<vector>
#include<iostream>
using namespace std ;
int main(){
    vector <int >v;
    v.insert(v.begin(),23);
    v.insert(v.begin(),235);
    v.insert(v.begin(),28);
    v.pop_back();
    for(int i : v){
cout << i << endl;
    }
    cout << v.at(1);
}