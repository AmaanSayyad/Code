#include<iostream>
#include<vector>
using namespace std;

int printKeypad(string input, string output, int index, string *map){
    //base case
    //when i goes outside the string abc
    if(index>=input.size()){
        cout<<output<<" ";
        return 0;
    }

    //recursive case
    int digit=input[index]-'0';
    string value = map[digit];
    
    for (int i = 0; i < value.size(); i++)
    {
        output.push_back(value[i]);
        printKeypad(input,output,index+1,map);
        output.pop_back();
    }
}

int main(){
    string input;
    cin>>input;

    string output="";

    int index=0;

    string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    //if input is 0 or 1
    if(input.length()==0){
        cout<<output<<" ";
        return 0;
    }

    printKeypad(input,output,index,map);
}