#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int mid, start=0, end = size-1;

    mid = (start+end)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        
        if(key>arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int size;
    cin>>size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;
    
    BinarySearch(arr, size, key);

    int index = BinarySearch(arr, size, key);

    if(index==-1){
        cout<<"Not found"<<endl;
    }else{
        cout<<"Found at index "<<index<<endl;
    }
}