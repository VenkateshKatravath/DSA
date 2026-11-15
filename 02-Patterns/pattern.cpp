#include<iostream>
using namespace std;
int sum =1;
void print1(int n){
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<sum<<" ";
            sum++;
        }
        cout<<endl;
    }
}
void print2(int n){
   for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
           cout<<(char)(64+j);
        }
        cout<<endl;
    }
} 
void print3(int n){

 for(int i =1; i<=n; i++){
        for(int j =1; j<=n-i+1; j++){
           cout<<(char)(64+j);
        }
        cout<<endl;
    }
} 
void print4(int n){
    int space =0;
    for(int i =0; i<=n; i++){
        // stars
        for(int j =1; j<=n-i; j++){
            cout<<"*";
        }
        // spaces
        for(int j =1; j<space; j++){
            cout<<" ";
    }
    // stars
    for(int j =1; j<=n-i; j++){
            cout<<"*";
}
     space+=2;
     cout<<endl;
}
    space =8;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<"*";
        }
        for(int j =1; j<space; j++){
            cout<<" ";
    }
    for(int j =1; j<=i; j++){
            cout<<"*";
}
     space-=2;
     cout<<endl;
}
}
void print5(int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            if (i==0 || j==0 || i==n-1 || j==n-1 ){
                cout<<"*";
            }
            else cout<<" ";
            }
            cout<<endl;
        }
    }

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print5(n);
    }
}