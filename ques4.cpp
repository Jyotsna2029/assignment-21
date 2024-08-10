// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two num1bers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two num1bers.

#include<iostream>
#include<array>
using namespace std;
int main()
{
    int arr[] = {5, 1, 5, 5, 2, 3};
    int n = sizeof(arr)/sizeof(arr[2]);
    cout<<"The array is: ";
    for(int i = 0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // bubble sort
    for(int i = 0; i<n-1; i++)
    {
        bool flag = true;
        for(int j = 0; j<n-i-1; j++)
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

    cout<<"The sorted array is: ";
    for(int i = 0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int num1 = 0;
    for(int i = 0 ; i<n; i++)
    {
        num1 *= 10;
        num1 += arr[i];
    }
    cout<<"The minimum num is: "<<num1<<endl;
    
    //find second minimum sorted array
    for(int i = n-1; i>=1; i--)
    {
        if(arr[i]!=arr[i-1])
        {
            swap(arr[i], arr[i-1]);
            break;
        }
    }
    cout<<"The second minimum sorted array is: ";
    for(int i = 0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //second min numm
    int num2 = 0;
    for(int i = 0 ; i<n; i++)
    {
        num2 *= 10;
        num2 += arr[i];
    }
    cout<<"The second sorted num is: "<<num2<<endl;
    cout<<"The minimum sum is: "<<(num1+num2);
}