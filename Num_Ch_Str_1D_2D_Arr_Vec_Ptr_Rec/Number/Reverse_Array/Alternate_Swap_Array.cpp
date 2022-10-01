#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int alternateswap(int arr[], int size){
   for (int i = 0; i < size; i=i+2)
    {
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int arr[10];
    int size = sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    alternateswap(arr,10);
    printArray(arr,10);
}