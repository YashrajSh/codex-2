#include<iostream>
#include<string>
using namespace std;
int main(){
string password="P@ASSword987";
string a;
while(true){

cout<<"Enter password:";
cin>>a;

 if(a==password){

cout<<"Access granted";
  break;
  } 

else{

    cout<<"Retry again\n";
}}
return 0;


}