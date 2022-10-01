#include<iostream>
#include<vector>
using namespace std;

int Partition(int arr[], int s, int e){
    int pivot = arr[s];

    int count=0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }

    //place pivot at right position
    int index=s+count;
    swap(arr[index],arr[s]);

    int i=s;
    int j=e;

    //left and right wala part smbhal lete h 
    while(i<index && j>index)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<index && j>index)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return index;
}

void QuickSort(int arr[], int s, int e){

    //base case
    if(s>=e)
        return;
    
    //partitioon karenfe
    int p = Partition(arr,s,e);

    //left part sort karo
    QuickSort(arr,s,p-1);

    //right wala part sort karo
    QuickSort(arr,p+1,e);
}

int main(){
    int size;
    cin>>size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    QuickSort(arr,0,size-1);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}