#include<iostream>
using namespace std;

int toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        ch = ch - 'A' + 'a';
        return ch;
    }
}

int main(){
    char ch[10];
    cin>>ch;

    int count = 0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }

    int start=0;
    int end = count-1;
    while(start<end){
        if(toLowerCase(ch[start])!=toLowerCase(ch[end])){
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

    toLowerCase('a');
}