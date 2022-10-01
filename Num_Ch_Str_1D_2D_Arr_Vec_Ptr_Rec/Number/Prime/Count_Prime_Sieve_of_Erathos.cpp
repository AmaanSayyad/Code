#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {
    int count=0;
    
    if(n==0 || n==1){
        return 0;
    }
        
    vector<bool>prime(n+1, true);
        
    for(int i=2; i<n; i++)
    {
        if(prime[i]){
            count++;
        
            for(int j=2*i; j<n; j=j+i){
                prime[j]=0;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    cout<<countPrimes(n);
}