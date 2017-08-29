//PROGRAM: QUICK SORT
//AUTHOR: ARVND BADWAR
#include<iostream>
using namespace std;
int quick_sort(int[], int, int);
int partition(int[], int, int);

int main()
{
    int a[100], n, i;
    cout<<"\n\n\t\t-----:QUICK SORT:-----\n\n";
    cout<<"\nTotal Student in First Year: ";
    cin>>n;
    cout<<"\nEnter the percentage of first year student \n";
    for(i=0; i<n; i++)
        cin>>a[i];

    quick_sort(a,0,n-1);
    cout<<"\nSorted List of Student: \n";
    for(i=0; i<n; i++)
        cout<<a[i]<<endl;
    return 0;
}

int quick_sort(int x[], int f, int l)
{
    if(f<l)
    {
        int k=partition(x, f, l);
        quick_sort(x, f, k-1);
        quick_sort(x, k+1, l);
    }
}

int partition(int x[], int f, int l)
{
    int pivot, temp;
    pivot=x[f];
    int i=f;
    int j=l+1;
    do
    {
        do
            i++;
        while(pivot>x[i] && i<=l);

        do
            j--;
        while(pivot<x[j]);

        if(i<j)
        {
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
        }
    }while(i<j);

    x[f]=x[j];
    x[j]=pivot;

    return j;
}
