#include<iostream> 
#include<map>
#include<string>
using namespace std;
int main(){
    map <int,string> m;
     m[1]= ":- Rubber";
     m[2]= ":- Aman";
     m[3]= ":- Vertika";
     m.insert({22,":- anjali"});
    for(auto i :m){
        cout << i.first<< "  " << i.second<< endl;
    }

    m.insert({2,"vrinda"});
    cout << "finding 1" << endl <<  m.count(1);
    cout << endl;
for(auto i :m){
        cout << i.first<< "  " << i.second<< endl;
    }
    auto it = m.find(2);
    for (auto i = it ; i!= m.end(); i++){
        cout << (*i).second << endl;
    }
     auto itr = m.find(2);
    for (auto i = it ; i!= m.end(); i++){
        cout << (*i).first << endl;
    }
    auto am = m.find(3);
    cout << (*am).second<< endl;
}
