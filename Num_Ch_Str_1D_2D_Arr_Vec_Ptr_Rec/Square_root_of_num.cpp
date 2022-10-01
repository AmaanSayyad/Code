#include<iostream>
using namespace std;

int mySqrt(int x) {
    long long int start=0,end=x;
    long long int mid = (start+end)/2;
    long long int ans=-1;
        
    while(start<=end){
        long long int integer = mid*mid;
        if(integer == x){
            return mid;
        }
            
        if(integer>=x){
            end = mid-1;
        }else if(integer<x){
            ans = mid;
            start = mid+1;
        }
            
        mid = (start+end)/2;
    }
    return ans;
}

double moreprecision(int x, int precision, int tempsol){
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++){
        factor = factor/10;
        for (double j = ans; j*j< x; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main(){
    int x;
    cin>>x;

    int tempsol = mySqrt(x);

    cout<<moreprecision(x,3,tempsol)<<endl;
}


// use <cmath.h> 
// use sqrt(x) and get answer in double