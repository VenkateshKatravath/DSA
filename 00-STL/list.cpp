#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(30);
    l.push_front(40);
    l.pop_back(); // remove last data
    l.pop_front();// remove first data
    for(int valu: l){
        cout<<valu<<endl;
    }
    
    return 0;
 // size , erase, clear, begin, end , 
 // rbegin,rend,insert,front , back these all also same as vector
// list cant access the data 
 } 