#include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	int res=1;
    
    while(n>0){
        if(n%2!=0){
            res = (1LL * (res) * (x)%m)%m;
        }
        x = (1LL * (x)%m * (x)%m)%m;
        n = n/2;
    }
    return res;
}

int main(){
    int x,n,m;
    cin>>x>>n>>m;

    cout<<modularExponentiation(x,n,m);
}