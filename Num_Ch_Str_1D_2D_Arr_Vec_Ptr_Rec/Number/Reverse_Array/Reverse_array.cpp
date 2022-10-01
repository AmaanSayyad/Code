#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    

    reverse(arr,5);
    printArray(arr,5);
}