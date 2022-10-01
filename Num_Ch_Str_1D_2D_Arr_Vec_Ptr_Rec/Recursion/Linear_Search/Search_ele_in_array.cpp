#include<iostream>
using namespace std;

int SearchEle(int arr[], int size, int key){
    if(size==0){
        cout<<"Not Found"<<endl;
    }
    
    else if(arr[0]==key){
        cout<<"Found"<<endl;
    }

    else{
        return SearchEle(arr+1, size-1, key);
    }
}


int main(){
    int size;
    cin>>size;

    int *arr=new int[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cin>>key;

    SearchEle(arr,size,key);
}