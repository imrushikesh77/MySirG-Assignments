#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a=b;
    b=temp;
}

int main(){
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    swap(x,y);
    cout<<"Swaped numbers are : "<<x<<" "<<y<<endl;
}