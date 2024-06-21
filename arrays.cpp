#include<iostream>
#include<array>
using namespace std;
int main(){
array < int, 4 >a = {2,4,5,6};
int size = a.size();
cout << size << endl;

for(int i = 0; i<4; i++){
    cout << a[i];
}
cout << endl;
// for the element at position
cout <<"The element at index 2 is " << a.at(2) << endl;

cout << "The element at first index  is " << a.front()<< endl;
cout << "The element at last index is " << a.back()<< endl;

}