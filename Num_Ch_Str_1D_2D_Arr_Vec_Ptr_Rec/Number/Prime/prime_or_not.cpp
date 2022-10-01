#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if (n == 0 || n == 1) {
        cout<<"Not Prime"<<endl;
    }else{
       for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                cout<<"Not Prime"<<endl;
                break;
            }else{
                cout<<"Prime"<<endl;
                break;
            }
        }
    }
}