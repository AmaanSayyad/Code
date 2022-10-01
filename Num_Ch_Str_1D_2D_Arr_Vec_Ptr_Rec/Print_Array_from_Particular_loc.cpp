#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int loc;
    cin>>loc;

    for (int i = loc; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}