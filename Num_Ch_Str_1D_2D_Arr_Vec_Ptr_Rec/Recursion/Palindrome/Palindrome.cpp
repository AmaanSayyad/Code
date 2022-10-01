#include<iostream>
using namespace std;

bool palindrome(string n, int i, int j){
    if(i>j){
        return 1;
    }

    if(n[i]!=n[j]){
        return 0;
    }else{
        return palindrome(n, i+1, j-1);
    }
}

int main(){
    string n;
    cin>>n;

    int i=0,j=n.length()-1;

    palindrome(n,i,j);
    cout<<palindrome(n,i,j)<<endl;
}