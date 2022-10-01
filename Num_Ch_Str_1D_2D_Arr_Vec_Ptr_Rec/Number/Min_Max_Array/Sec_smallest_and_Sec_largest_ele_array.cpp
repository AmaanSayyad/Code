#include<iostream>
#include<limits.h>
using namespace std;

int findingsecondlargest(int arr[], int size){
    int max = INT_MIN;
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>maxi && arr[i]<max){
            maxi=arr[i];
        }
    }
    cout<<maxi<<endl;
}

int findingsecondsmallest(int arr[], int size){
    int min = INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<mini && arr[i]>min){
            mini=arr[i];
        }
    }
    cout<<mini<<endl;
}

int main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    findingsecondlargest(arr,5);
    findingsecondsmallest(arr,5);
}