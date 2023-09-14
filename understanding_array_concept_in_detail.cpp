#include<iostream>
using namespace std;

int printArray(int arr[], int size)
{
    cout<<'\n';

    cout<<"Printing the array:"<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done Bhailog"<<endl;
}



int main()
{
int arr1[15];
int n = 15;

//Accessing the garbage values
cout<<"Accessing the garbage values of the array above"<<endl;
for(int i = 0; i<n; i++)
{
    cout<<arr1[i]<<" ";
}

cout<<'\n';
cout<<'\n';

int arr2[10] = {3, 4, 6};
cout<<"Accessing array arr2:"<<endl;
int j = 10;
for(int a = 0; a<j; a++)
{
    cout<<arr2[a]<<" ";
}

cout<<'\n';
cout<<'\n';

//Created a new array with all items with single value other than 0
cout<<"A new array with all items with single value other than 0"<<endl;
int arr3[20];
int k = 20;
for(int b = 0; b<k; b++)
{
    arr3[b] = 5;
    cout<<arr3[b]<<" ";
}

cout<<'\n';
cout<<'\n';

int first[5] = {2, 3, 7, 8, 9};
int w = 5;
printArray(first, w);


cout<<endl<<endl<<"Everything is fine"<<endl;

}
