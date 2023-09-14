#include<iostream>
using namespace std;

int main()
{
//arr1[5] = {2,3,4,6,8};
//arr2[4] = {1,4,8,9};

int size1;
cout<<"Enter the size of the array:"<<endl;
cin>>size1;

int arr1[100];
cout<<"Enter the elements of the array in increasing order:"<<endl;
for(int i = 0; i<size1; i++)
{
    cin>>arr1[i];
}

int m;
cout<<"Enter the size of the array:"<<endl;
cin>>m;

int arr2[100];
cout<<"Enter the elements of the array in increasing order:"<<endl;
for(int j = 0; j<m; j++)
{
    cin>>arr2[j];
}


int i = 0;
int j = 0;
int ans;

while( i<size1 && j<m )
{
    if(arr1[i] < arr2[j])
    {
        i++;
    }

    else if(arr1[i] == arr2[j])
    {
        ans = arr1[i];
        cout<<"The common element from both the array is:"<<ans<<" ";
        i++;
        j++;
    }

    else if(arr1[i] > arr2[j])
    {
        j++;
    }
}

//cout<<"The common element from both the array is:"<<ans<<" "<<endl;
}
