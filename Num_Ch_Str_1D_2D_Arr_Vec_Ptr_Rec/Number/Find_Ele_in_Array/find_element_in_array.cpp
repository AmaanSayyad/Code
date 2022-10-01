#include<iostream>
using namespace std;

bool searchelement(int arr[], int size, int element){
    int i;
    for (i = 0; i < size; i++)
    {
        if(arr[i]==element){
          return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int element;
    cin>>element;
    
    bool found = searchelement(arr, 5, element);

    if (found == 1) {
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    
}