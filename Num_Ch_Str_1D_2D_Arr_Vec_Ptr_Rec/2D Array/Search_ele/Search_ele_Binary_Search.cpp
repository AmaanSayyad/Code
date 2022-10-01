#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int start = 0;
    int m = matrix.size();
    int n = matrix[0].size();
    int end = (m*n)-1;
    
    int mid = (start+end)/2;
    while(start<=end){
        int elemid = matrix[mid/n][mid%n];
        if(elemid == target){
            return 1;
        }
    
        if(elemid<target){
            start = mid+1;
        }else{
            end = mid-1;
        }
        
        mid = (start+end)/2;

    }
    return 0;
}

int main(){
    int n, m;
    cin>>n>>m;
    
    vector<vector<int>>matrix(n, vector<int>(m));
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            cin>>matrix[row][col];
        }
    }
    
    int target;
    cin>>target;
    
    if(searchMatrix(matrix, target)){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }
    
    return 0;
}