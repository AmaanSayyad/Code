#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Merge_Two_Arrays(vector<int> arr1,vector<int> arr2, vector<int> arr3, int size1, int size2, int size){

    for (int i = 0; i < size1; i++)
    {
        arr3[i]=arr1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        arr3[i+size1]=arr2[i];
    }

    for (int i = 0; i < size ; i++)
    {
        sort(arr3.begin(),arr3.end());
        cout<<arr3[i]<<" ";
    }
}

int main(){
    int size1;
    cin>>size1;

    int size2;
    cin>>size2;

    int size = size1 + size2;

    vector<int> arr1(size1);
    vector<int> arr2(size2);
    vector<int> arr3(size);

    for (int i = 0; i < size1; i++)
    {
        cin>>arr1[i];
    }
    
    for (int i = 0; i < size2; i++)
    {
        cin>>arr2[i];
    }

    Merge_Two_Arrays(arr1,arr2,arr3,size1,size2, size);
}
