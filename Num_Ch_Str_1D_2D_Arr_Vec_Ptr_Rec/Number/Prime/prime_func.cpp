#include<iostream>
using namespace std;

int isPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout<<"Not Prime"<<endl;
            break;
        }else{
            cout<<"Prime"<<endl;
            break;
        }
    }
    
}

int main(){
    int n;
    cin>>n;

    isPrime(n);
}