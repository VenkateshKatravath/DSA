#include<iostream>
using namespace std;
#include<vector>
int main(){
     //vector<int> vec; // 0
     //vec.push_back(10);
     //vec.push_back(20);
     //vec.push_back(30);
     //cout<<vec.size()<<endl;
     //out<<vec.capacity()<<endl;
     //vec.pop_back();
     // vec.emplace_back(30);
     //vector<int> vec ={10,20,30}; // array initilazation
     // vector<int> vec(3,10); // size 3 fixed and valu 10->3 times
     //vector<int> vec1={10,20,30};
     //vector<int> vec2(vec1);
     //vector<int> vec ={10,20,30,40,50};
     //vec.erase(vec.begin());// erase 10
     //vec.erase(vec.begin()+2); // erase 30
     //vec.erase(vec.begin() + 1,vec.begin() + 3);
     //vec.clear();// clear all valu
     //for(int val : vec){
     //cout<<val<<endl;
     //* ITERATOR-->LOOP FORWARD 
     vector<int> vec={10,20,30,40,50,60};
     //vector<int>::iterator itr; -->iterator defind
     //for(itr = vec.begin(); itr!=vec.end(); itr++){
     //cout<<*(itr)<<endl;
               //*BACKWARD LOOP
              // vector<int>::reverse_iterator itr; or auto--> iterator defind type 

               for( auto itr = vec.rbegin(); itr!=vec.rend(); itr++){
                cout<<*(itr) << endl;


     }
     //cout<<" vec.begin:"<< *(vec.begin()) <<endl;// 10 }-->ITERATOR
     //cout<<" vec.end:"<< *(vec.end()) <<endl;// 0.     }
     //cout<<"empty :"<<vec.empty()<<endl;
     //cout<<" size :" << vec.size()<<endl; // 0
     //cout<<" vec.cap :" <<vec.capacity()<<endl; // 5

     //cout<<" val at index 2 : "<< vec[2]<< " or" << vec.at(2)<<endl;
     //cout<<" front : "<< vec.front()<< endl;
     //cout<<" back : "<< vec.back()<<endl;
     return 0;
}
