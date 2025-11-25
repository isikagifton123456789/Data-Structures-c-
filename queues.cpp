// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
#include<string>
using namespace std;
int main() {
   queue<string>queue1;
   string value;
   cout<<"Enter your strings\n";
   for(int i=0;i<=6;i++){
       cin>>value;
      queue1.push(value);
   }
  if(queue1.empty()){
      cout<<"The queue is empty";
  }
  
 //displaying top Elements
 if(!queue1.empty()){
     cout<<"Front Element"<<queue1.front()<<
     endl;
     cout<<"Back Element"<<queue1.back()<<
     endl;
 }
 cout<<"Dequeueing Elements";
 while(!queue1.empty()){
     cout<<queue1.front()<<"";
     queue1.pop();
 }

    

    return 0;
}