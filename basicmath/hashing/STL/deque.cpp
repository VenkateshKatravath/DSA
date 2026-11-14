#include<iostream>
#include<deque>
using namespace std;
int main(){
   deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(30);
    d.push_front(40);
    d.pop_back(); // remove last data
    d.pop_front();// remove first data
    for(int valu: d){
        cout<<valu<<endl;
    }
    cout<<d[2]<<endl;
    
    return 0;
}