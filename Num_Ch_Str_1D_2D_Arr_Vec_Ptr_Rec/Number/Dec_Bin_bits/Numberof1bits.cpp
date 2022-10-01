#include<iostream>
using namespace std;

int hammingWeight(uint32_t n) {
int long long count=0;
    while(n!=0){
            
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<< count<<endl;
}

int main(){
    int long long n;
    cin>>n;

    hammingWeight(n);
}