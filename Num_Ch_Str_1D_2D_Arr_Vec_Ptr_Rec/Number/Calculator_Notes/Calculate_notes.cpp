#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int remaining,remaining1, remaining2, remaining3;
    int note1 = 100, note2 = 50, note3 = 20, note4 = 1;
    int note1_count=0, note2_count, note3_count, note4_count;

    remaining = n/note1;
    note1_count = remaining;
    remaining = n-(note1*note1_count);
    cout<<note1_count<<endl;

    remaining1  = remaining/note2;
    note2_count = remaining1;
    remaining = remaining-(note2*note2_count);
    cout<<note2_count<<endl;

    remaining2  = remaining/note3;
    note3_count = remaining2;
    remaining = remaining-(note3*note3_count);
    cout<<note3_count<<endl;

    remaining3  = remaining/note4;
    note4_count = remaining3;
    remaining = remaining-(note4*note4_count);
    cout<<note4_count<<endl;
}