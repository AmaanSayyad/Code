#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a = 0;
    int b = 1;

    if (n==a || n==b){
        cout<<"Fibonacci"<<endl;

    }else{
        int c = a+b;
        while(c<=n)
            {
            if(c == n){
                cout<<"Fibonacci"<<endl;
                break;
            }
        a = b;
        b = c;
        c = a + b;
            }
    }
}


