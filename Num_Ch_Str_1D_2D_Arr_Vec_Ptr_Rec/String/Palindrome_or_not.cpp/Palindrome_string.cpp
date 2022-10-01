#include<iostream>
using namespace std;

int main(){
    char str[10];
    cin>>str;

    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }

    int start = 0;
    int end = count-1;
    while(start<=end){
        if(str[start]!=str[end]){
            cout<<"Not a palindrome"<<endl;
            break;
        }
        else{
            cout<<"Palindrome"<<endl;
            break;
        }

        start++;
        end--;
    }
}