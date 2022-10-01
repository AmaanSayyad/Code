#include<iostream>
using namespace std;

int Steps(int src, int des){
    cout<<"src: "<< src <<" des: "<< des<<endl;

    //base case
    if(src==des){
        cout<<"paunch gaya";
        return 0;
    }

    //processing step
    src++;

    //recurring step
    Steps(src,des);
}

int main(){
    int src,des;
    cin>>src>>des;

    Steps(src,des);
}