#include<iostream>
using namespace std;

//b is set to default argument, switch case
void getSum(int &a, int b=0){
    int sum =0;
    sum = a+b;
    cout<<sum<<endl;
}

int main(){
    int a=1,b=2;
    getSum(a);
}