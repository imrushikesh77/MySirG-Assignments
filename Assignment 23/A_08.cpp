#include <iostream>
using namespace std;

int main(){
    cout<<"Enter two numbers "<<endl;
    int a,b;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
}