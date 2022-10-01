#include<iostream>
using namespace std;

int RowWiseSum(int arr[][3], int sizeofrow){
    for (int row = 0; row < sizeofrow; row++)
    {
        int sum=0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int ColWiseSum(int arr[][3], int sizeofrow){
    for (int row = 0; row < sizeofrow; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[col][row];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    int sizeofrow;
    cin>>sizeofrow;

    int arr[sizeofrow][3];
    int sizeofcol = 3;
    
    for (int row = 0; row < sizeofrow; row++)
    {
        for (int col = 0; col < sizeofcol; col++)
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

    RowWiseSum(arr, sizeofrow);
    ColWiseSum(arr, sizeofrow);
}