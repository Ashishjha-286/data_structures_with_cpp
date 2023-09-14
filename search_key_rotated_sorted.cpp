#include<iostream>
using namespace std;


int pivotElem(int arr[], int size)
{
int start = 0;
int end = size - 1;

int mid = (start + end) / 2;

while(start < end)
{
    if(arr[mid] >= arr[0])
    {
        start = mid + 1;
    }
    else{
        end = mid;
    }

    mid = (start + end) / 2;
}

return end;

}


int binarySearch(int arr[], int start, int end, int key)
{
int s = 0;
int e = end;

int mid = (s + e) /2;

while(s<=e)
{
    if(arr[mid] == key)
    {
        return mid;
    }

    else if(key > arr[mid])
    {
        s = mid + 1;
    }

    else if(key < arr[mid])
    {
        e = mid - 1;
    }

    mid = (s + e) /2;
}

return -1;

}


/*
int searchKey(arr[], int start, int end, int key)
{
int s = start;
int e = end;
int pivot = ans;

if(pivot<=key<=e)
{
    int i =0;
    int j = size - 1;

    int mid = (i + j) / 2;
    int val;
    while(i<j)
    {
        if(arr[mid] == key){
            val = mid;
        }
        else if(arr[mid] > key)
        {
            j = mid -1;
        }
        else{
            i = mid + 1;
        }
        mid = (i + j) / 2;
    }
    return val;
}
else{

}
}


*/


int findPosition(int arr[], int n, int key)
{
int pivot = pivotElem(arr, n);
if(key >= arr[pivot] && key < arr[n-1])
{
    return binarySearch(arr, pivot, n-1, key);
}
else{
    return binarySearch(arr, 0, pivot-1, key);
}
}


int main()
{
int arr1[7] = {7,9,11,14, 17, 20 ,1};

int ans = pivotElem(arr1, 7);
cout<<"The pivot element of the given array is at index:"<<ans<<endl;

int ans1 = binarySearch(arr1, 0, 6, 14);
cout<<"The key in the given array is at index:"<<ans1<<endl;

int ans2 = findPosition(arr1, 7, 14);
cout<<"The key in the given array is at index:"<<ans2<<endl;

}
