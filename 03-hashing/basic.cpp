#include<iostream>
using namespace std;
 int number =1;
int f(int number, int arr[], int n){
    int count = 0;
    for(int i =0; i<n; i++){
      if(number==arr[i]) {
        count =count+1;
      } 
    } 
      return count;
}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
     int ans = f(1 ,arr, n);
     cout<<ans;
     return 0;
}
    