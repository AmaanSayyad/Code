#include<iostream>
using namespace std;

int main(){
    int size1,size2;
    cin>>size1>>size2;
    
    int arr[size1][size2];

    // i->row
    // j->col

    for(int i=0; i<size1; i++){
        for (int j = 0; j < size2; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {   
            //display row wise |
            //                 |
            cout<<arr[i][j]<<" ";

            //display col wise ---
            //cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
}
