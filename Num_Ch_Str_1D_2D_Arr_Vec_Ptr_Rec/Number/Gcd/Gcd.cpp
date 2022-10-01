#include<iostream>
using namespace std;

//gcd formula: gcd(a,b)=gcd(a-b, b)
int Gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a = a-b;
        }else if(b>a){
            b = b-a;
        }
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<Gcd(a,b);
}