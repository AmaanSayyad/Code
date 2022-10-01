#include<iostream>
using namespace std;

int factorial(int n){
    //base case is mandatory for recursion if not written then stack overflow will occur -1 -2 -3
    if(n==0){
        return 1;
    }

    int chotti = factorial(n-1);
    int badi = n * chotti;

    return badi;

    //return n * factorial(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<factorial(n);
}