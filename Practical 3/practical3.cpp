#include<iostream>
using namespace std;
void readArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cin>>arr[i];
}
void displayArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void swapValues(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
void sortArray(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swapValues(arr[j],arr[j+1]);
        }
    }
}
int main()
{
    int arr[50],n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    readArray(arr,n);
    cout<<"Original array: ";
    displayArray(arr,n);
    sortArray(arr,n);
    cout<<"Sorted array: ";
    displayArray(arr,n);
    return 0;
}
