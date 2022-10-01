#include<iostream>
using namespace std;

int countPrimes(int n) {
    int count=0;
    if(n==0 || n==1){
        cout<<"0"<<endl;
    }
        
    for(int i=2; i<=n; i++){
        if(i%2!=0){
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){
    int n;
    cin>>n;
    
    countPrimes(n);
}