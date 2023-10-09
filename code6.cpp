#include<iostream>
using namespace std;

bool isPrime(int a){
    for(int i=2; i<a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int count = 0;
    cout<<"The first 5 prime numbers are:"<<endl;
    for(int i = 2; i <= 100; i++){
        if(isPrime(i)){
            cout<<i<<" ";
            count++;
            if(count == 5){
                break;
            }
        }
    }
    return 0;
}