#include<iostream>
#include<algorithm>
using namespace std;

int Merge(int *arr, int s, int e)
{
    int mid = (s+e)/2;

    //length of both arrays 1 & 2
    int leftlen = mid - s + 1;
    int rightlen = e - mid;

    //create two arrays
    int *left=new int[leftlen];
    int *right=new int[rightlen];

//copy values
    int mainArrayIndex=s;
    for (int i = 0; i < leftlen; i++)
    {
        left[i]=arr[mainArrayIndex++];
    }

    for (int i = 0; i < rightlen; i++)
    {
        right[i]=arr[mainArrayIndex++];
    }

//merge 2 sorted arrays    
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while (index1<leftlen && index2<rightlen)
    {
        if (left[index1]<right[index2])
        {
            arr[mainArrayIndex++]=left[index1++];
        }
        else
        {
            arr[mainArrayIndex++]=right[index2++];
        }
    }

    while (index1<leftlen)
    {
        arr[mainArrayIndex++]=left[index1++];
    }

    while (index2<rightlen)
    {
        arr[mainArrayIndex++]=right[index2++];
    }
}

void MergeSort(int *arr, int s, int e)
{
    int mid = (s+e)/2;

    if(s>=e)
    {
        return;
    }

    //for left sort
    MergeSort(arr,s,mid);

    //for right sort
    MergeSort(arr,mid+1,e);

    //merge
    Merge(arr,s,e);
}


int main(){
    int size;
    cin>>size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    MergeSort(arr,0,size-1);

    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;

}