#include<iostream>
#include<math.h>
using namespace std;

int power(int a, int b){

    if(b==0 || b==1){
        return a;
    }
    
    //recursive call
    int ans = pow(a,b/2);

    if(b%2==0){
        return ans * ans;
    }else{
        return a * ans * ans;
    }
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<power(a,b);
}