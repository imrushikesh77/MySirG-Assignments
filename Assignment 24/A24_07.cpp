#include <iostream>
using namespace std;

int add(int a,int b,int c=0){
    return a+b+c;
}

int main(){
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    cout<<"The sum of all three numbers is : "<<add(a,b,c)<<endl;
    cout<<"The sum of first two numbers is : "<<add(a,b)<<endl;
}