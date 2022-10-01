#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int long long n;
    cin>>n;

    int answer=0;
    int long long previous,i=0;

    while (n!=0)
    {
        previous = n%10;

        if(previous == 1){
            answer = answer+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<answer<<endl;
}