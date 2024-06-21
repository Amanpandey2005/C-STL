#include<queue>
#include<iostream>
using namespace std;
int main(){
  priority_queue<int> maxi;
  priority_queue<int,vector<int>,greater<int>> mini;
  
  maxi.push(23);
  maxi.push(45);
  maxi.push(3);
  maxi.push(5);
  int size = maxi.size();
  for (int i = 0; i<size ; i++){
    cout << maxi.top()<< endl;
    maxi.pop();
  }
  mini.push(23);
  mini.push(45);
  mini.push(3);
  mini.push(5);
  int Size = mini.size();
  for (int i = 0; i<Size ; i++){
    cout << mini.top()<< endl;
    mini.pop();
  }
}