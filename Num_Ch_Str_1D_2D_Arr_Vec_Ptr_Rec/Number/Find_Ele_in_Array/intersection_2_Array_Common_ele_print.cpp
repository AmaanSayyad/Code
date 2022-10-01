#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int>ans;
    int i=0,j=0;
	while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i]>arr2[j]){
            j++;
        }else{
            i++;
        }
    }
    return ans;
}

int main(){
    int arr1[5];
    int arr2[5];
    int size=sizeof(arr1)/sizeof(int);

    int i=0,j=0;
    for ( i = 0; i < size; i++)
    {
        cin>>arr1[i];
    }

    for ( j = 0; j < size; j++)
    {
        cin>>arr2[j];
    }
   // findArrayIntersection(arr1,5,arr2,5);
}