#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string arr[] = {"raghav", "urvi","vishwa","sanket","harsh","priya","manvi"};
    int n = sizeof(arr)/sizeof(arr[3]) ;
    cout<<"The string is: ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<n-1; i++)
    {
        bool flag = true;
        for(int j = 0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag == true)
        {
            break;
        }
    }
    cout<<"The sorted string is: ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}