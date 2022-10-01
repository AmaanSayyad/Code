#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int row, int col, int sizeofrow, int sizeofcol, int target){
    for (int row = 0; row < sizeofrow; row++)
    {
        for (int col = 0; col < sizeofcol; col++)
        {
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int sizeofrow;
    cin>>sizeofrow;

    int arr[sizeofrow][4];
    int sizeofcol = 4;

    for(int row=0; row<sizeofrow; row++){
        for(int col=0; col<sizeofcol; col++){
            cin>>arr[row][col];
        }
    }

    int target;
    cin>>target;

    for(int row=0; row<sizeofrow; row++){
        for(int col=0; col<sizeofcol; col++){
            cout<<arr[row][col] <<" ";
        }
        cout<<endl;
    }

    if(isPresent(arr, 0, 0, sizeofrow, sizeofcol, target)){
        cout<<"Present";
    }
    else{
        cout<<"Not Present";
    }
}