#include<iostream>
using namespace std;
void venky(int count){
    if(count==4){
        return;
    }
    cout<<count<<" ";
    venky(count+1);
   
      
    }
void digit(){
   cout<<"1";
   digit();
}
int main(){
    digit();

}
// so this program is a stack overflow

int main(){
    venky(0);
}

