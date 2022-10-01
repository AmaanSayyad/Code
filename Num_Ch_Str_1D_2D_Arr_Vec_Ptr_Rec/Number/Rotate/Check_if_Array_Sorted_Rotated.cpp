#include<iostream>
#include<vector>
using namespace std;

bool CheckingRotatedandSorted(vector<int> &arr, int size){
    int count=0;
    for(int i=1; i<size; i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }

    if(arr[size-1]>arr[0]){
        count++;
    }

    if(count <= 1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}

int main(){
    int size;
    cin>>size;

    vector<int>arr(size);

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    CheckingRotatedandSorted(arr,size);
}