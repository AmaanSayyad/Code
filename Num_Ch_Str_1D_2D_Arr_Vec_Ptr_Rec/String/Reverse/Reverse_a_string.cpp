#include<iostream>
using namespace std;

int reverse(string str){
    int start = 0;
    int end = str.length() - 1;

    while(start<end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
   
    cout<<str<<endl;
}

int main(){
    char str[10];
    cin>>str;

    //int count=str.length();
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }

    cout<<count<<endl;
    reverse(str);

}