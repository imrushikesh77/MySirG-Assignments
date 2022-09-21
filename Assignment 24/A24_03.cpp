#include <iostream>
using namespace std;

int power(int a,int b){
    int product = 1;
    while(b>0){
        product = product * a;
        b--;
    }
    return product;
}

int main(){
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    cout<<x<<" raised to "<<y<<" is : "<<power(x,y)<<endl;
}