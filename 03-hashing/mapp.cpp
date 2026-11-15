#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    // pre- compute
    map<int, int>map;
    for(int i=0; i<n; i++) {
        map[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetching
        cout<<map[number]<<endl;
    }
    return 0;
}