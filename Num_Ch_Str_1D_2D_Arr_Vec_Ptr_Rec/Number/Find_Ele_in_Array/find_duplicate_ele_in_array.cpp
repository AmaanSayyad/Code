#include<iostream>
using namespace std;

int duplicate(int arr[], int size){
    int ans=0;
    for (int i = 0; i < size; i++) {
        ans =ans^arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans^i;
    }
    cout<<ans<<endl;
}


int main(){
    int arr[10];
    int size = sizeof(arr)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    duplicate(arr,10);
}