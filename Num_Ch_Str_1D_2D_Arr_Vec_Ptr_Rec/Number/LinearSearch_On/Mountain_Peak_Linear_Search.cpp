#include<iostream>
using namespace std;

int PeakEle(int arr[],int size){
    int peak = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>arr[i+1]){
            peak = arr[i];
            break;
        }
    }
    cout<<"peak element is "<<peak<<endl;

    //find index of peak element
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==peak){
            index = i;
            break;
        }
    }
    cout<<"index is "<<index<<endl;
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    PeakEle(arr,size);
}