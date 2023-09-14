#include<iostream>
using namespace std;

bool BinarySearch(int arr1[], int n, int m, int mid)
{
int stuCount = 1;
int pageSum = 0;

for(int i= 0; i<n; i++)
{
    if(pageSum+arr1[i] <= mid)
    {
        pageSum+=arr1[i];
    }

    else{
        stuCount++;

        if(stuCount > m || arr1[i] > mid){
            return false;
        }
        //int pageSum = 0;
        pageSum= arr1[i];
    }

}
return true;

}


int allocateBooks(int arr[], int n, int m)
{
int start = 0;

int sum = 0;

for(int i=0; i<n; i++)
{
    sum+= arr[i];
}
int end = sum;
int ans = -1;

int mid = (start + end) / 2;

while(start<=end)
{
    if(BinarySearch(arr, n, m, mid))
    {
        ans = mid;
        end = mid - 1;
    }

    else{
        start = mid + 1;
    }
    mid = (start + end) / 2;
}
return ans;

}



int main()
{
int arr[4] = {10, 20, 30, 40};
int n;
cout<<"Enter the value of number of books:"<<endl;
cin>>n;

int m;
cout<<"Enter the number of students:"<<endl;
cin>>m;

int ans = allocateBooks(arr, 4, 2);
cout<<"The answer of this Book Allocation Problem is:"<<" "<<ans<<endl;


}
