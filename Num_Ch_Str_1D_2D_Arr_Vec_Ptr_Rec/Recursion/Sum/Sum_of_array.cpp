#include<iostream>
using namespace std;

int ArraySum(int arr[], int size){
    if(size==0){
        return 0;
    }

    if(size==1){
        return arr[0];
    }else{
        ArraySum(arr+1, size-1);
        return arr[0] + ArraySum(arr+1, size-1);
    } 
}

int main(){
    int size;
    cin>>size;

    int *arr = new int[size];
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int ans = ArraySum(arr, size);
    cout<<ans<<endl;
}