// this is better force code  approaach and its time complexcity is 0(2n)
// #include<iostream>
// #include<vector>
// using namespace std;
// int largestElement( int arr[],int n){
//     int largest = arr[0];
//     for(int i =0; i<n; i++){  //--> 0(n)
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     return largest;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int largest = largestElement(arr, n);
//     int slargest=-1; // -1 we use bcz of the array element are positive if the array is conatian negative number we gest use INT_MIX 
// for(int i =0; i<n; i++){ // --> 0(n)
//     if(arr[i]>slargest && arr[i]!=largest){
//         slargest = arr[i];
//         }
//     }
//     cout<<slargest;
//     return 0;
// time complexcity is 0(n+n)=0(2n) is 
// }
// and now we approach Optimal force code its timeComplexcity is 0(n)--> fire approach
#include<iostream>
#include<vector>
using namespace std;
int secondlargestElement(int arr[], int n){
    int largest = arr[0];
    int slargest =INT_MAX; // -1 
    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i]>slargest && arr[i]!=largest){ // why we need this else if bcz sometime a number is smaller then largest and bigger the secomdlargest .
            slargest =arr[i];
                }
    }
    return slargest;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   int slargest= secondlargestElement(arr,n);

cout<<slargest;
}
