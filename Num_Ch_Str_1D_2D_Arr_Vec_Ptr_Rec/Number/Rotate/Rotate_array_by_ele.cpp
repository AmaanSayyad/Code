#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) 
    {
        vector<int>temp(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            //formula
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums=temp;
    } 

int main(){
    int size;
    cin>>size;
    
    vector<int>arr(size);
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int k;
    cin>>k;
    
    rotate(arr,k);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}