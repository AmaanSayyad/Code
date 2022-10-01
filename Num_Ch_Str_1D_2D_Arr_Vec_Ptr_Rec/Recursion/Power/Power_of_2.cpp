#include<iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }

    int smallerproblem = power(n-1);
    int biggerproblem = 2 * smallerproblem;

    return biggerproblem;

    //return = 2 * power(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<power(n);
}