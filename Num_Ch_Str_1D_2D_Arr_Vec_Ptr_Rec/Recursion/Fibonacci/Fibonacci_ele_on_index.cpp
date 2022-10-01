#include<iostream>
using namespace std;

int fibonacciRecursion(int indexpos){
    //base case
    if(indexpos==0){
        return 0;
    }

    if(indexpos==1){
        return 1;
    }

    //processing + recurring
    int result = fibonacciRecursion(indexpos-1) + fibonacciRecursion(indexpos-2);
    return result;
}

int main(){
    int indexpos;
    cin>>indexpos;

    cout<<fibonacciRecursion(indexpos);
}