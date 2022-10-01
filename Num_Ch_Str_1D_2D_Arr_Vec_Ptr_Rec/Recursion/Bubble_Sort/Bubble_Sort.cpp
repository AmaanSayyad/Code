#include<iostream>
using namespace std;

int BubbleSort(int *arr, int size){
    if(size==0 || size==1){
        return 1;
    }

    for (int i = 0; i < size-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,size-1);
}

int main(){
    int size;
    cin>>size;

    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    BubbleSort(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}