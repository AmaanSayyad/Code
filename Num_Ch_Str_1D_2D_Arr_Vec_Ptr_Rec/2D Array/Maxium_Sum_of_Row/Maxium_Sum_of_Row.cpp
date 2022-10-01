#include<iostream>
#include<limits.h>
using namespace std;

int MaxSumRow(int arr[][3], int sizeofrow){
    int max = INT_MIN;
    int maxindex = -1;
    for (int row = 0; row < sizeofrow; row++)
    {
        int sum=0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        
        if(sum>max){
            max = sum;
            maxindex = row;
        }
    }
    cout<<"maxiumum sum of row wise array is: " << max<<endl;
    cout<<"index of max sum row wise array is: " << maxindex<<endl;
}

int main(){
    int sizeofrow;
    cin>>sizeofrow;
    
    int arr[sizeofrow][3];
    int sizeofcol = 3;
    for (int row = 0; row < sizeofrow; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin>>arr[row][col];
        }
    }

    for (int row = 0; row < sizeofrow; row++)
    {
        for (int col = 0; col < sizeofcol; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    
    MaxSumRow(arr, sizeofrow);
}