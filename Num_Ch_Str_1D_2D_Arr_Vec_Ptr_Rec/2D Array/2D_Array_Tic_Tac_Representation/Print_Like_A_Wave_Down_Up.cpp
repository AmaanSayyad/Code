#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;
    for(int col = 0; col<mCols; col++){
        if(col % 2 !=0){
            for(int row=nRows-1; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }else{
            for(int row=0; row<nRows; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main(){
    int nRows, mCols;
    cin>>nRows>>mCols;

    vector<vector<int>>arr(nRows, vector<int>(mCols));
    for(int row=0; row<nRows; row++){
        for(int col=0; col<mCols; col++){
            cin>>arr[row][col];
        }
    }

    for (int row = 0; row < nRows; row++)
    {
        for (int col = 0; col < mCols; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    vector<int>ans = wavePrint(arr, nRows, mCols);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}