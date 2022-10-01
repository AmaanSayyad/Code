#include<iostream>
using namespace std;

char toLowerCase(char ch){
   if(ch >= 'a' && ch <='z'){
       return ch;
   }
   else
   {
       char temp = ch - 'A' +'a';
       return temp;
   }
}
// check palindrome or not 
bool checkPalindrome(string s)
{
   int i=0;
   int j=s.size()-1;
   while(i<=j){
       if (isalnum(s[i]) == 0)
           i++;
       else if (isalnum(s[j]) == 0)
           j--;
       else if(toLowerCase(s[i]) != toLowerCase(s[j]))
           return false;
       else{
           i++;
           j--;
       }
   }
    return true;
}

int main(){
    char str[10];
    cin>>str;

    if(checkPalindrome(str)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }

    checkPalindrome(str);
    toLowerCase('A');
}