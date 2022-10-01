#include<iostream>
#include<math.h>
using namespace std;

int bitwiseComplement(int n) {
    int m=n;

    if(n==0){
        return 1;
    }
        
    int mask=0;
    while(m!=0){
        mask = (mask <<1) | 1;
        m = m>>1;
    }
    int ans = (~n)&mask;
        
    cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;

    bitwiseComplement(n);
}