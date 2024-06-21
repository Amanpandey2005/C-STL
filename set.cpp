#include<set>
#include<iostream>
using namespace std;
int main(){
    set <int> s;
s.insert(23);
s.insert(34);
s.insert(22);
for (int i:s){
    cout << i << endl;
}
s.erase(s.begin());
for (auto i:s){
    cout << i << endl;
}
cout << "23 is present or not in set count" << s.count(23)<< endl;
set<int>::iterator itr= s.find(23);
for(auto it = itr; it!= s.end(); it++ ){
cout << *it << " ";
}cout << endl;