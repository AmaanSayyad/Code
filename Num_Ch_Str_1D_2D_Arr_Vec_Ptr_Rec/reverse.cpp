//write a program to reverse a number
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int previous;
    int answer=0;
    while (n!=0)
    {
       previous=n%10;
       //formula to reverse the number
       answer=answer*10+previous;
       n=n/10;
    }
    cout<<answer<<endl;
}