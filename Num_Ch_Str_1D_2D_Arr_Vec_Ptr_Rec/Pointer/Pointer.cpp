#include<iostream>
using namespace std;

int update(int *ptr){   
    *ptr=*ptr+1;
    return *ptr;
}

int main(){
    int n = 5;
    int *ptr = &n;
    
    //declare double pointer
    int **dptr = &ptr;

    cout<<update(ptr)<<endl;
    cout<<**dptr<<endl;
}