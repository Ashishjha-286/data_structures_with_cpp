#include<iostream>
using namespace std;


int leftbinary(int arr[], int size, int key)
{
int s = 0;
int e = size - 1;

int mid = (s + e) / 2;
int index = -1;
while(s<=e)
{
    if(key == arr[mid])
    {
        index = mid;
        e = mid - 1;
        //return index;
    }

    else if(key < arr[mid])
    {
        e = mid -1;
    }

    else if(key > arr[mid])
    {
        s = mid + 1;
    }

    mid = (s+e) / 2;

}
return index;
}


int rightbinary(int arr[], int size, int key)
{
int s = 0;
int e = size - 1;

int mid = (s + e) / 2;
int index = -1;
while(s<=e)
{
    if(key == arr[mid])
    {
        index = mid;
        s = mid + 1;
        //e = mid - 1;
        //return index;
    }

    else if(key < arr[mid])
    {
        e = mid -1;
    }

    else if(key > arr[mid])
    {
        s = mid + 1;
    }

    mid = (s+e) / 2;

}

return index;
}


int main()
{
int evenArr[6] = {1,2,3,3,4,5};
int oddArr[8] = {2, 4, 4, 4, 4, 6, 8, 8};

//int n = 6;
//int m = 5;
int ans = leftbinary(oddArr, 8, 4);
cout<<"The element 4 at the most leftmost side is present at:"<<" "<<ans<<endl;

int ans1 = rightbinary(oddArr, 8, 4);
cout<<"The element 4 at the most rightmost side is present at:"<<" "<<ans1<<endl;

int total = (ans1 - ans) + 1;
cout<<"Total no. of times element 4 occurs in the array is:"<<" "<<total;

}

