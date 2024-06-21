#include<queue>
#include<iostream>
using namespace std;
int main(){
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater< int >> mini;
    maxi.push(34);
    maxi.push(45);
    maxi.push(78);
    maxi.push(90);
    int n = maxi.size();
    for(int i = 0; i<n ;i++){
        cout <<maxi.top()<< endl;
        maxi.pop();
    }
    mini.push(23);
    mini.push(43);
    mini.push(73);
    mini.push(3);
    int m = mini.size();
    for(int i = 0; i<m ;i++){
        cout <<mini.top()<< endl;
        mini.pop();
    }
}