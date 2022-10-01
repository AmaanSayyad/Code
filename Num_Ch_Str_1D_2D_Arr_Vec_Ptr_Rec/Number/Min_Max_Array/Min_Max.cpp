#include<iostream>
#include<limits.h>
using namespace std;

int isMax(int arr[], int size){
    //int max = INT_MIN;
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        //if(arr[i]>max){
         //   max=arr[i];
        //}

        maxi = max(maxi, arr[i]);
    }
   // return max;
    return maxi;
}

int isMin(int arr[], int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}


int main(){
    int size;
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    

    cout<<isMax(arr, size)<<endl;
    cout<<isMin(arr, size)<<endl;
}