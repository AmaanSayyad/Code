#include<iostream>
using namespace std;

//check if a string is a permutation of another string
bool checkEqual(int a[26], int b[26]){
    for(int i =0;i<26;i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}
    
bool checkInclusion(string s1, string s2) {
        
    //create array and store count of each character in s1 in new array
    int count1[26]={0};
    for(int i = 0; i <s1.length(); i++){
        int index = s1[i] -'a';
        count1[index]++;
    }
        
    //create array and store count of each character in s2 in new array
    int i = 0;
    int count2[26] = {0};
    int windowSize = s1.length();
    while (i < windowSize && i<s2.length()){
        int index2 = s2[i] -'a';
        count2[index2]++;
        i++;
    }
        
    //check if the arrays are equal
    if(checkEqual(count1,count2))
        return true;
        
    //check if the arrays are equal after sliding the window
    while(i<s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;
            
        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;
            
        if(checkEqual(count1,count2))
        return true;
            
    }
        
    return false;
}

int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    
    cout<<checkInclusion(s1, s2)<<endl;
}