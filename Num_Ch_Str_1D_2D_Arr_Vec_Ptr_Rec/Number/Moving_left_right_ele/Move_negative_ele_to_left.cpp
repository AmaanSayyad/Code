#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MovingNegativeEleToLeft(vector<int>& arr,int size)
{
    //sort array in descending order
    sort(arr.begin(),arr.end());
    cout<<"Sorted array is: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cin>>size;

    vector<int>arr(size);

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    MovingNegativeEleToLeft(arr,size);
}