#include<iostream>
using namespace std;


int swapALt(int arr[], int n)
{
//int start = 0;
//int next = 1;
for(int i = 0; i<n; i+=2)
{
    if(i+1<n){
    swap(arr[i], arr[i+1]);
    //start = start + 2;
    //next = next + 2;
    }
}
}

int printArray(int arr[], int n)
{
for(int i = 0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}


int main()
{
int size;
cout<<"Enter the size of the array:"<<endl;
cin>>size;

int arr[100];
cout<<"Enter the elements of the array:"<<endl;
for(int i = 0; i<size; i++)
{
    cin>>arr[i];
}

cout<<"The array after alternate swapping is:"<<endl;
swapALt(arr, size);
printArray(arr, size);

}
