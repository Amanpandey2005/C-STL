#include<deque>
#include<iostream>
using namespace std;
int main(){
    deque<int>d;
    d.push_front(34);
    d.push_front(46);
    d.push_front(3);
    d.push_front(89);
    d.push_front(90);
    d.push_front(8);
    d.push_front(86);
    for (int i :d){
        cout << i<< endl;
    }
d.pop_front();
for (int i :d){
        cout << i<< endl;
    }
    cout << "The element at index 1 is " << d.at(1)<< endl;
    cout << "The first element at index  is " << d.front() << endl;
    cout << "The last element at index  is " << d.back() << endl;
    // for erasing from one to another index
    d.erase(d.begin() , d.begin()+3);
    cout << "After Erasing"<< endl;
    for (int i :d){
        cout << i<< endl;
    }
}