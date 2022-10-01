#include<iostream>
#include<vector>
using namespace std;

int Subset(int arr[], int n, vector<int> v){
    if(n==0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return 0;
    }

    //exclude
    Subset(arr+1,n-1,v);

    //include
    v.push_back(arr[0]);
    Subset(arr+1,n-1,v);

}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    Subset(arr.data(),n,{});

}