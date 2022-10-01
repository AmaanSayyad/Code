#include<iostream>
using namespace std;

char ReverseWords(string s){
    int start=0;
    int end=s.length()-1;
    while(start<=end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout<<s<<endl;
}

int main(){
    string s;
    cin>>s;

    ReverseWords(s);
}