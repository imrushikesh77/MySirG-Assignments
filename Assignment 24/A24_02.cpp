#include <iostream>
using namespace std;

void maxNumber(int n){
    int max = n%10;
    while(n>0){
        if(n%10 > max){
            max = n%10;
            n=n/10;
        }
        else{
            n=n/10;
        }
    }
    cout<<"Max digit is : "<<max<<endl;
}

int main(){
        int n;
        cout<<"Enter a number : ";
        cin>>n;
        maxNumber(n);
        // cout<<"Max digit in "<<n<<" is "<<maxNumber(n)<<endl;
    return 0;   
}