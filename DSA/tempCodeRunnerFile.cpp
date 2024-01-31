#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    int max=0,second=0;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
            second=max;
            max=arr[i];
        }
        else if (arr[i]>second)
        {
            second=arr[i];
        }
    }
    cout<<"Largest element: "<<max<<endl<<"Second largest element: "<<second<<endl;
    return 0;
}