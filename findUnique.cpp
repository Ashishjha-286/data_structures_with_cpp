#include<iostream>
using namespace std;

int findUnique(int arr[], int n)
{
int ans = 0;
for(int i =0; i<n; i++)
{
    ans = ans^arr[i];
}
return ans;
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

int elem = findUnique(arr, size);
cout<<"The unique element from the list is:"<<elem<<endl;

}
