#include<iostream>
using namespace std;

int TotalOccurence(int arr[], int size, int occuredele){
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==occuredele){
            count++;
        }
    }
    cout<< count<<endl;
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

    TotalOccurence(arr,size,occuredele);
}