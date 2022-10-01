#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int sum = 0;

    int size = arr[5];

    int i;
    for (i = 1; i < size; i++)
    {
        cin>>arr[i];

        sum = sum+arr[i];
    }
    
    cout<<sum<<endl;
}