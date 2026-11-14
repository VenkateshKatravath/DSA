#include<iostream>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // pre storing
    int hash[10] ={0};
    for(int i=0; i<n; i++){
        hash[arr[i]] ++;
    }
    int q;
    cin>>q;
    while(q--){
    int number;
    cin>>number;
    cout<<hash[number]<<endl; // fetching
    }
    return 0;

}