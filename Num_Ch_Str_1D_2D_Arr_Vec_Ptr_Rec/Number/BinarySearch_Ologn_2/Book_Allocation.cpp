#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount=1;
    int pagesum=0;
    
    for(int i=0;i<n;i++)
    {
        if(pagesum + arr[i]<=mid)
        {
            pagesum=pagesum+arr[i];
        }
        else
        {
            studentCount++;

            if(studentCount>m || arr[i]>mid)
            {
                return false;
            }

            pagesum = arr[i];

        }

        if(studentCount>m){
            return false;
        }

    }
    return true;
}


int allocateBooks(vector<int> arr, int n, int m) {
    
    int sum=0;
  
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }

    int start=0, end=sum;
    int mid = (start+end)/2;
    int ans=-1;
    while(start<=end){
        if(isPossible(arr,n,m,mid)) {
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
        
        mid = (start+end)/2;
    }
    return ans;
}

int main(){
    vector<int> arr;
    int n;
    int m;
    cin>>n>>m;
    
    //take input in vector
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<allocateBooks(arr,n,m)<<endl;
    return 0;
}