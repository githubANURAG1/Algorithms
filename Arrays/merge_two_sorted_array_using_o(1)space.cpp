#include<bits/stdc++.h>
using namespace std;

void sort_with_O1(int* a1,int* a2,int n1,int n2)
{
    for(int i=0;i<n1;i++)
    {
        if(a1[i]>a2[0])
        {
            swap(a1[i],a2[0]);
            sort(a2,a2+n2);
        }
    }

}

int main()
{
    int n1,n2;

    cout<<"enter 1st array size :";
    cin>>n1;
    cout<<"enter 2nd array size :";
    cin>>n2;

    int arr1[n1],arr2[n2];

    cout<<"enter elements of array1 :";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }

    cout<<"enter elements of array2 :";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
   
    sort_with_O1(arr1,arr2,n1,n2);

    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i];
    }
    return 0;
}