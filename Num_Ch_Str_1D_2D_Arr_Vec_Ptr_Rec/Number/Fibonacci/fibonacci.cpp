#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a=0;
    int b=1;
    int nextnumber;

    for(int i=0;i<n;i++){
        nextnumber = a+b;
        a=b;
        b=nextnumber;   
        cout<<nextnumber<<endl;
    }
}