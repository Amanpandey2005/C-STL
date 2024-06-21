#include<list> 
#include<iostream>
using namespace std;
int main()
{
    list < int > l;
    l.push_front(3);
    l.push_front(3);
    l.push_front(3);
    
    auto it = l.begin();
    advance(it, 3);  // Move the iterator 3 positions forward
    l.erase(l.begin(), it);
    
    for (int i :l){
        cout << i<< endl;
    }
} 