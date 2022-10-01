#include<vector>
#include<iostream>
using namespace std;

int findPeak(vector<int> &arr) {
    int size = arr.size();
    int start=0,end=size-1;
    int mid=(start+end)/2;
    
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }else{
            end = mid;
        }
        mid=(start+end)/2;
    }
    //return start (for index);
    //return arr[mid] (for value);
    return arr[mid];
}

int main(){
    int size;
    cin>>size;
    
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    cout<<findPeak(arr)<<endl;
    return 0;

}