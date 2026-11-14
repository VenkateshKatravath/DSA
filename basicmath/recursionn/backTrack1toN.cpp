#include<iostream>
using namespace std;
void back(int i,int n){
    if(i<1)
    return;
    back(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    back(n,n);
}