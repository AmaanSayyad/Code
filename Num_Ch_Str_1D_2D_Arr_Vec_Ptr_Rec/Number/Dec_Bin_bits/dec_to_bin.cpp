#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int long long n;
    cin>>n;

    int long long answer=0,bit,i=0;

    while (n!=0)
    {
        bit = n&1;

        answer = (bit*pow(10,i))+answer;
        
        n=n>>1;
        i++;
    }
    
    cout<<answer<<endl;
    
}