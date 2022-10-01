#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    vector<int>ans;
    
    int startingcol = 0;
    int endingcol = m-1;
    int startingrow = 0;
    int endingrow = n-1;
    
    int count = 0;
    int end = n*m;
    
    while(count<end){
        for(int index=startingcol; count<end && index<=endingcol; index++){
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;
        
        for(int index=startingrow; count<end && index<=endingrow; index++){
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;
        
        for(int index=endingcol; count<end && index>=startingcol; index--){
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;
        
        for(int index=endingrow; count<end && index>=startingrow; index--){
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;
    } 
    return ans;
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
    
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cout<<matrix[row][col]<<" ";
        }
        cout<<endl;
    }
    
    vector<int>ans = spiralPathMatrix(matrix, n, m);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}