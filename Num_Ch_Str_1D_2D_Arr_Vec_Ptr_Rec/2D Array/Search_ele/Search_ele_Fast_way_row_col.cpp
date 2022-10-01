#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    int row = matrix.size();
    int col = matrix[0].size();
        
    int rowIndex = 0;
    int colIndex = col-1;
        
    while(rowIndex<row && colIndex>=0){
        int elemid = matrix[rowIndex][colIndex];
            
        if(elemid==target){
            return 1;
        }
        
        if(elemid<target){
            rowIndex++;
        }else{
           colIndex--;
        }
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
