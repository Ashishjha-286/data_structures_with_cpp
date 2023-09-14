#include<iostream>
using namespace std;


void reverse(int arr[], int n)
{
int start = 0;
int end = n-1;

while(start<=end)
{
    swap(arr[start], arr[end]);
    start++, end--;
}
}

void printArray(int arr[], int n)
{
    cout<<"Printing the reverse of the array you entered:"<<" "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
int size;
cout<<"Enter the size of the array:"<<endl;
cin>>size;

int arr[100];
for(int i = 0; i<size; i++)
{
    cin>>arr[i];
}

//cout<<"Printing the array you entered:"<<" "<<arr[i]<<" ";

reverse(arr, size);
printArray(arr, size);


}
