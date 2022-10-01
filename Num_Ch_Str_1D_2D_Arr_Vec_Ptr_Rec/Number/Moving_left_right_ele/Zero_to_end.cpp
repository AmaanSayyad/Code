#include<iostream>
#include<vector>
using namespace std;

int printArray(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int pushZerosAtEnd(vector<int> &arr) 
{
    int i_nonzero = 0;
    for(int j=0; j<arr.size(); j++){
        if(arr[j]!=0){
            swap(arr[j], arr[i_nonzero]);
            i_nonzero++;
        }
    }
}

int main(){
    int size;
    cin>>size;

    vector<int> arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    
    pushZerosAtEnd(arr);
    printArray(arr);
}