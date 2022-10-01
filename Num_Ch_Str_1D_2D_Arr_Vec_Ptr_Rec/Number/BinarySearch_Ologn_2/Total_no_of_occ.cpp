#include<iostream>
using namespace std;

int FirstOccurence(int arr[], int size, int occuredele){
    int start=0, end=size-1;
    int mid = (start+end)/2;
    int ans;

    while (start<=end)
    {   
        if(arr[mid]==occuredele){
            ans = mid;
            end=mid-1;
        }else if(occuredele>arr[mid]){
            start = mid+1;
        }else if(occuredele<arr[mid]){
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int LastOccurence(int arr[], int size, int occuredele){
    int start=0, end=size-1;
    int mid = (start+end)/2;
    int ans;

    while (start<=end)
    {   
        if(arr[mid]==occuredele){
            ans = mid;
            start=mid+1;
        }else if(occuredele>arr[mid]){
            start = mid+1;
        }else if(occuredele<arr[mid]){
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
    
    int occuredele;
    cin>>occuredele;

    FirstOccurence(arr,size,occuredele);
    LastOccurence(arr,size,occuredele);

    int TotalCount_of_Occuence = (LastOccurence(arr,size,occuredele)-FirstOccurence(arr,size,occuredele)) + 1;

    cout<<TotalCount_of_Occuence<<endl;
}