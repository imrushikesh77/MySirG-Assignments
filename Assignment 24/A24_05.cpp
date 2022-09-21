#include <iostream>
#include <math.h>
using namespace std;

bool isFibonacci(int x){
    int n = 5*x*x + 4;
    int m = 5*x*x - 4;
    int s = sqrt(n);
    int t = sqrt(m);
    if(s*s==n || t*t==m){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool flag = isFibonacci(n);
    if(flag==true){
        cout<<"Yes, this number is in fibonacci series."<<endl;
    }
    else{
        cout<<"No, this number is not in fibonacci series."<<endl;
    }
}