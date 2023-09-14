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




int main()
{
int arr1[7] = {7,9,11,14, 17, 20 ,5};

int ans = pivotElem(arr1, 7);
cout<<"The pivot element of the given array is at index:"<<ans<<endl;

}
