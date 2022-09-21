#include <iostream>
using namespace std;

void isPrime(int n){
    bool flag=false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag = true;
            break;
        }
        else{
            flag = false;
        }
    }
    if(flag){
        cout<<"Number is not prime.\n";
    }
    else{
        cout<<"Number is prime.\n";
    }
}

int main(){
    while(1){
        cout<<"Enter a number : ";
        int n;
        cin>>n;
        isPrime(n);
    }
}