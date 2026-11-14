#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product=1;
    while (n>0)
    {
       int lastdigit=n%10;
        product=product*lastdigit;
       n=n/10;
    }
    cout<<product;
  
}