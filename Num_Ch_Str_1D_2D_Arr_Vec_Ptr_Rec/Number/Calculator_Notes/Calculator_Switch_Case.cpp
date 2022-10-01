#include<iostream>
using namespace std;

int main(){
    int ele1,ele2;
    cin>>ele1>>ele2;

    char a;
    cout<<"which operation is to be performed"<<endl;
    cin>>a;

    switch(a)
    {
        case '+': {
            cout<<ele1+ele2<<endl;
            break;
        } 
        case '-': {
            cout<<ele1-ele2<<endl;
            break;
        }case '*':{
            cout<<ele1*ele2<<endl;
            break;
        }case '/':{
            cout<<ele1/ele2<<endl;
            break;
        }default:{
            cout<<"No operation performed"<<endl;
        }
    }
}