#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int start=0;
    int end = v.size()-1;
    while(start<end){
        swap(v[start++], v[end--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int i = a.size()-1;
    int j = b.size()-1;

    vector<int>ans;

    int carry=0;
    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];
        
        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    while(i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    return reverse(ans);
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    vector<int>ans = findArraySum(a,n,b,m);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}