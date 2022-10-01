#include<iostream>
#include<limits.h>
using namespace std;

void PrintArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

//selection sort sabse pailey minimum niklega aur usko select nahi karte (smallest element milega)
int sorting(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
      swap(arr[minIndex], arr[i]);
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