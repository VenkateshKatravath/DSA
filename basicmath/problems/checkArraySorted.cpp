#include<iostream>
#include<vector>
using namespace std;
bool isSorted(int arr[],int n ){
    for(int i =1; i<n; i++){
        if(arr[i]>=arr[i-1]){
        }
        else {
            return false;
        }

    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    if(isSorted(arr,n)){
        cout<<" Array is sorted ";
    }
    else{
        cout<<" Array is not Sorted ";
    }
    return 0;
}
// time complexcity is 0(N) and space complexcity is 0(1).