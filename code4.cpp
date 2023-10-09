#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the age of person:";
cin>>a;
if(a>0 && a<=12){
cout<<"The person is a child";
}
else if(a>12 && a<=19){
cout<<"The person is a teen";
}
else if(a>19 and a<=65){
cout<<"The person is an adult";
}
else{
    cout<<"person is senior citizen";
}

 return 0;


}