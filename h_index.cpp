#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"\nEnter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter "<<size<<" array elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int lo=0,up=size-1;
    int hindex=0;

    while(lo<=up)
    {
        int mid=(lo+up)/2;
        if(arr[mid]>=(mid+1))
        {
            lo=mid+1;
            hindex=mid+1;
        }
        else
        {
            up=mid-1;
        }

    }

	
    cout<<"\nH-Index is: "<<hindex;
    return 0;
}
