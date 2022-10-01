#include<iostream>
using namespace std;

int FirstOccurence(int arr[], int size, int key){
    int start=0, end=size-1;
    int mid;
    int ans;
    mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end= mid-1;
        }

        else if(key>arr[mid]){
            start = mid+1;
        }else if(key<arr[mid]){
            end = mid-1;
        }

        mid = (start+end)/2;
    }
    return ans;
}

int LastOccurence(int arr[], int size, int key){
    int start=0, end=size-1;
    int mid;
    int ans;
    mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }

        else if(key>arr[mid]){
            start = mid+1;
        }else if(key<arr[mid]){
            end = mid-1;
        }

        mid = (start+end)/2;
    }
    return ans;
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

    FirstOccurence(arr, size, key);
    
    cout<<"First occurence of "<<key<<" is at index "<<FirstOccurence(arr, size, key)<<endl;
    cout<<"Last occurence of "<<key<<" is at index "<<LastOccurence(arr, size, key)<<endl;
}