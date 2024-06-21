#include<stack>
#include<iostream>
using namespace std;
int main(){
    stack<int>s; 
    s.push(23);
     s.push(73);
      s.push(26);
      cout << "The stack is empty or not "<< s.empty()<< endl;
}