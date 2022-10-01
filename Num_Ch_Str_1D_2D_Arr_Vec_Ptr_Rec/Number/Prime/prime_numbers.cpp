#include<iostream>
using namespace std;
int main(){
    int a,i;
    cin>>a;

    for (int num = 2; num <= a; num++)
    {
        for(i = 2; i <= (num / 2); i++) {
            if(num%i==0){
                i=num;
                break;
            }
        }

        if(i != num) {
            cout << num << " ";
        }
    }
}