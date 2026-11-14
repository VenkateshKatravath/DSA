#include<iostream>
#include<vector>
using namespace std;
int main(){
    // pair<int, int> p = {1,2};
    // cout<< p.first<<endl; 1
    // cout<< p.second<<endl; 2
    // pair<string,int> p ={"venky",5};
    // cout<< p. first << endl; venky
    // cout<< p. second << endl; 5
    // pair<int,pair<char,int>> p ={5 ,{'v',5}};
    // cout<< p. first << endl; 5
    // cout<< p. second.first << endl; v
    // cout<< p. second.second << endl; 5 
    vector<pair<int,int>> vec = { {1,2},{2,3},{3,4,}};
    vec.push_back({4,5}); // it assume allready pair formed inside.INSERT
    vec.emplace_back(4,5); // in- place object create and no need--> {}
    for(pair<int,int> p:vec){  
        cout<<p.first<<" "<< p.second<<endl;
    }
}
