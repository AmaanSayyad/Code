#include<iostream>
using namespace std;

// tc : 5 1
    //  1 2 3 4 5
    //  1 4
    //  4 2 3 4 5
    // not repeating therefore ans is 5

// tc : 5 2
    //  1 2 4 3 5
    //  1 4
    //  2 4
    //  4 4 4 3 5
    //  repeating therefore ans is 2

int SearchReplace(int arr[], int size, int index[], int ele[]){

    // search for ele in arr
    // if found then replace it with ele[i]
    // if arr[i]!=next ele then coun++
  

}

int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int t;
    cin>>t;
    
    int index[t],ele[t];
    for (int i = 0; i < t; i++)
    {
        cin>>index[i]>>ele[i];
    }
    
    SearchReplace(arr,size,index,ele);
}