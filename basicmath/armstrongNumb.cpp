#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int duplicate=n;
    int sum = 0;
    while (n>0)
    {
        int LD=n%10;
        sum =sum+LD*LD*LD;
        n=n/10;
    }
  
if (duplicate==sum) cout<<" yes armstrong";
else
cout<<"Not armstrong";
}