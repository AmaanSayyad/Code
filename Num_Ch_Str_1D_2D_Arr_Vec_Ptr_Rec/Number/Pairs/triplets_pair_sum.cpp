#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n) {
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if((arr[i]+arr[j]+arr[k]==0) && (i!=j && j!=k && i!=k)){
                    vector <int> temp;                                     
                    temp.push_back(arr[i]);                     
                    temp.push_back(arr[j]);                     
                    temp.push_back(arr[k]);                     
                    sort(temp.begin(),temp.end());                     
                    ans.push_back(temp);
                }
            }
        }
    }
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}

int main(){
    int size;
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int n;
    cin>>n;

    //findTriplets(arr,n);
}