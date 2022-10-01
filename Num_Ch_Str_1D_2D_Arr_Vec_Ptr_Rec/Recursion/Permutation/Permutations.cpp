#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    void solve(vector<int> nums, vector<vector<int>>& ans, int index){
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        
        for(int j=index; j<nums.size();j++){
            //recursion
            swap(nums[index], nums[j]);
            solve(nums, ans, index+1);
            //backtrack;
            swap(nums[index],nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums, ans, index);
        return ans;
    }
    

/*int main(){
    //input nahi ley raha hai [1,2,3] => permutation [1,2,3] [1,3,2] [2,1,3] [2,3,1] [3,1,2] [3,2,1]
    vector<int> nums;
    for (int i = 0; i < nums.size(); i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    vector<vector<int>> ans=permute(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    solve(nums, ans, 0);
}

*/