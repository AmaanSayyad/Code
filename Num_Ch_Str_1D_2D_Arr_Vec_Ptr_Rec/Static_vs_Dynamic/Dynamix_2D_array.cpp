#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;

    //declare 2D array using new keyword in heap memory for 2d array
    int **dptr = new int*[row];
    for(int i=0; i<row; i++){
        dptr[i] = new int[col];
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>dptr[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<dptr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //delete the dynamic array otherwise memory leak will occur
    for(int i=0; i<row; i++){
        delete[] dptr[i];
    }

    delete[] dptr;
    
}