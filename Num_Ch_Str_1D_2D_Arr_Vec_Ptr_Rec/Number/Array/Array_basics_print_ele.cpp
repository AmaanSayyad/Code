#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int i;
    
    int size = sizeof(arr)/sizeof(int);
    
    for (i = 0; i < size; i++) {
        cin>>arr[i];
    }
}
