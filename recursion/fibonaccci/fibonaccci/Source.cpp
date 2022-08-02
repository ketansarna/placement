#include<iostream>
using namespace std;

void merge(int *arr,int s,int e)
{
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    for(int i=0;i<len1;i++)             //copy arra1 and 2
    {
        arr1[i]=arr[s];
    }
    int k = mid+1;
    for(int i=0;i<len2;i++)
    {
        arr2[i]=arr[k++];
    }

    int i=0,j=0;
    k=s;

    while(i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k++]=arr1[i++];
        }
        else
        {
            arr[k++]=arr2[j++];
        }
    }
    while(i<len1)
    {
        arr[k++]=arr1[i++];
    }
    while(j<len2)
    {
        arr[k++]=arr2[j++];
    }

    delete[]arr1;
    delete[]arr2;

}


void mergesort(int *arr,int s , int e)
{
    if(s>=e)
    return;
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main()
{
    int arr[6]={4,3,5,6,1,3};
    mergesort(arr,0,5);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}