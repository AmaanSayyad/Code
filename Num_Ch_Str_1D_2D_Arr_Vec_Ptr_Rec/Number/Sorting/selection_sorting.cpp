#include<iostream>
#include<limits.h>
using namespace std;

void PrintArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int sorting(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int minIndex = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
            }
      swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int size;
    cin>>size;
    
    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    sorting(arr,size);
    PrintArray(arr,size);
}