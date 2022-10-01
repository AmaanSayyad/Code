#include<iostream>
using namespace std;

//bruteforce count and display solution
int sorting(int arr[], int size){
    int count0=0,count1=0,count2=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count0++;
        }else if(arr[i]==1){
            count1++;
        }else{
            count2++;
        }
    }
    
    for(int j=0;j<count0;j++){
        cout<<"0"<<" ";
    }
    for(int j=0;j<count1;j++){
        cout<<"1"<<" ";
    }
    for(int j=0;j<count2;j++){
        cout<<"2"<<" ";
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
    //PrintArray(arr,size);
}