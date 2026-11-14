#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max=0;
    while (n>0)
    {
       int lastdigit=n%10;
       if(lastdigit>max){
       max=lastdigit;
       }
       n=n/10;
    }
    cout<<max;
  
}