#include<iostream>
using namespace std;

int unique(int arr[],int size){
    int ans=0;
    int i;
    for (i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
}

int main(){
    int arr[7];
    int size = sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    unique(arr,7);
}