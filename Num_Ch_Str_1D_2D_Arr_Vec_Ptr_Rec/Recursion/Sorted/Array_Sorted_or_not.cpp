#include<iostream>
using namespace std;

bool ArraySorted(int arr[], int size){
    if(size == 0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingpart = ArraySorted(arr+1, size-1);
        return remainingpart;
    }

}

int main(){
    int size;
    cin>>size;

    int *arr = new int[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    bool ans = ArraySorted(arr, size);

    if(ans){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
}