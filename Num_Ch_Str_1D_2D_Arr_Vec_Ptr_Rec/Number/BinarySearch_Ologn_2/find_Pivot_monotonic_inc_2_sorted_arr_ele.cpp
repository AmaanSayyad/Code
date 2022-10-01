#include<iostream>
using namespace std;

int findingPivot(int arr[], int size){
    int start=0, end=size-1;
    int mid = (start+end)/2;
    while (start<end)
    {
        if (arr[mid]>=arr[0])
        {
            start = mid+1;
        }
        else if(arr[mid]<arr[0])
        {
            end = mid;
        }
        mid = (start+end)/2;
    }
    cout<<"index of pivot is "<< end;
    
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    findingPivot( arr, size);
}