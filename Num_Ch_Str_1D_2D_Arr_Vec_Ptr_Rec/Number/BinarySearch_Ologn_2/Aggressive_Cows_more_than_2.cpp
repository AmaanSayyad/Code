#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid){
    int CowCount = 1;
    int lastPos = stalls[0];
    
    for(int i=0; i<stalls.size(); i++){
        if(stalls[i]-lastPos>=mid){
            CowCount++;
            if(CowCount==k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start=0;
    int n = stalls.size();
    int end=stalls[n-1];
    int mid = (start+end)/2;
    int ans=-1;
    while(start<=end){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int main(){
    vector<int> stalls;
    int size,k;
    cin>>size>>k;
    
    //take input in vector
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        stalls.push_back(x);
    }
    
    cout<<aggressiveCows(stalls, k)<<endl;
   
}