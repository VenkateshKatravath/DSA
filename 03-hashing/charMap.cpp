#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    // pre- compute
    map<char, int>map;
    for(int i=0; i<s.size(); i++) {
        map[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        // fetching
        cout<<map[ch]<<endl;
    }
    return 0;
}