#include<iostream>
#include<limits.h>
using namespace std;

void PrintArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

//bubble sort last wala sabse pailey niklega aur usko select nahi karte (largest element milega)
int sorting(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sorting(arr,n);
    PrintArray(arr,n);
}