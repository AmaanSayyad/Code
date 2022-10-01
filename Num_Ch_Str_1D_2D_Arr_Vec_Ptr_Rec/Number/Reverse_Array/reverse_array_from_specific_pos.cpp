#include<iostream>
#include<vector>
using namespace std;

int printArray(vector<int> arr, int m){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int reverseArray(vector<int> &arr , int m)
{
    int n = arr.size();
	int start = m+1, end=n-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
    int size;
    cin>>size;
    int m;  
    cin>>m;
    
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    reverseArray(arr,m);
    printArray(arr,m);

}