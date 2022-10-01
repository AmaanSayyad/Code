#include<iostream>
#include<limits.h>
using namespace std;

int MinMax(int arr[], int size, int k){
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min= arr[i];
        }
    }
    
    int maximumdistance;
    maximumdistance = max-min;
    cout<<maximumdistance<<endl;
}

int main(){
    int size,k;
    cin>>size>>k;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    MinMax(arr,size,k);
}