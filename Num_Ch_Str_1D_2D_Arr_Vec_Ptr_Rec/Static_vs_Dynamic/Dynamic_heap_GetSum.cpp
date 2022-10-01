#include<iostream>
using namespace std;

int getSum(int *ptr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + ptr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    //array of size n
    //storing in heap using new keyword
    int *ptr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>ptr[i];
    }

    cout<<getSum(ptr, n)<< " " ;
}