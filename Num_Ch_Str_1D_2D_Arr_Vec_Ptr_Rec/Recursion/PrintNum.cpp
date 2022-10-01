#include<iostream>
using namespace std;

int printNum(int n){
    if(n==0){
        return 1;
    }

    cout<<n<<endl;
    printNum(n-1);

    //if want to print in reverse order;
    //printNum(n-1);
    //cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    printNum(n);
}