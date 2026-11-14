#include<iostream>
#include<set>
#include<vector>
using namespace std;
// brutte froce approach
int RemoveDuplicateElement(vector<int> &arr, int n){
    set<int> st; // stor unique element in st
    for(int i=0; i<n; i++){// timecomplexcity is 0(NlogN)
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto val:st){ // st lo unna unique element val lo velthundhi okati okate
        arr[index]=val;
        index++;
    }
    return index; // 1 2 3 
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){ // timecomplexcity is 0(n)
         cin>> arr[i]; // space compl is 0(n)
    }
   int k= RemoveDuplicateElement(arr,n);// k = unique element eni unnayo count 
  for(int i =0; i<k; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
