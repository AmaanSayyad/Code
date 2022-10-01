#include<iostream>
using namespace std;

int isfactorial(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
    
}

int factt(int n, int r){
    int num = isfactorial(n);
    int denom = isfactorial(r)*isfactorial(n-r);

    int ans = num/denom;
    return ans;
}

int main(){
    int n,r;
    cin>>n>>r;

    cout<<"Factorial is "<<factt(n,r)<<endl;
}