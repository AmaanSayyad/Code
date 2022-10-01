#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int sorting(int arr[], int size){
    int i=0,j=size-1;
    while(i<j){
    
        while(arr[i]==0 && i<j){
            arr[i]++;
        }

        while(arr[j]==1 && i<j){
            arr[j]--;
        }
        
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }   
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