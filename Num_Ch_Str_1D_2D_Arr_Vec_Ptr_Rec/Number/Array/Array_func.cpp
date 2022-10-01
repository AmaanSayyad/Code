#include<iostream>
using namespace std;

int array(int arr[], int size){
    int i;
    for (i = 0; i < size; i++) {
        cin>>arr[i];
    }
}

int main(){
    int arr[10];
    array(arr, 10);

    cout<<arr[7]<<endl;
}