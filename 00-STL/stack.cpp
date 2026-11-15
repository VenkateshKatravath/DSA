#include<iostream>
#include<stack> // stack->last in first out
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    stack<int> s2;
    s2.swap(s);  // proff
    //cout<<" top ="<< s.top() <<endl;
    cout<<"s.size ="<< s.size() <<endl; // 4-->0 
    cout<<"s2.size ="<< s2.size() <<endl; // 4
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
   
    
}