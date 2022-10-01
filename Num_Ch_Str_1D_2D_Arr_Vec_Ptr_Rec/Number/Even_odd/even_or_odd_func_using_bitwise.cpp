#include<iostream>
using namespace std;

int iseven(int n){
    if(n&1){//odd
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cin>>n;

    if(iseven(n)) {
        cout <<" Number is Even" <<endl;
    }
    else {
        cout<< " Number is Odd" <<endl;
    }

}