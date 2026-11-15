     #include<iostream>
     #include<vector>
     using namespace std;
     void DLeftRotate(int arr[],int n, int d){
     d= d%n;
     //first store the d element in tepm
     int temp[d]; 
     for(int i=0; i<d; i++){
        temp[i] = arr[i];
     } 
     // shifting remaing element to left.
     for(int i =d; i<n; i++){
        arr[i-d] = arr[i];
     } 
     // put Back Temp Elements 
     for(int i = n-d; i<n; i++){
      arr[i] =temp[i-(n-d)];
     }
    
}
int main(){
    int n;
    cin>>n;
     int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    DLeftRotate(arr,n,d);
    
    for(int i =0 ; i<n; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
    
} 