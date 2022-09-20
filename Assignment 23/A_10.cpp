#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Enter elements of array "<<endl;
    int sum=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;
}