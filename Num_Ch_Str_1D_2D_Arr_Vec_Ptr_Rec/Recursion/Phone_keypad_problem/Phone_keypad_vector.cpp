#include<iostream>
#include<vector>
using namespace std;

void printKeypad(string digits, string output, int index, vector<string>&ans, string *map)
    {
        if(index>=digits.size())
        {
            ans.push_back(output);
            return;
        }

        int number=digits[index]-'0';
        string value = map[number];
    
        for (int i = 0; i < value.size(); i++)
        {
            output.push_back(value[i]);
            printKeypad(digits,output,index+1,ans,map);
            output.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits)    
    {
        vector<string>ans;
        
        string output="";
        
        int index=0;
        
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        if(digits.length()==0)
        {
            return ans;
        }

        printKeypad(digits,output,index,ans,map);
        return ans;
    }

int main(){
    string input;
    cin>>input;

    vector<string> ans=letterCombinations(input);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}