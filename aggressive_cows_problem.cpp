#include<iostream>
#include <bits/stdc++.h>
using namespace std;


bool isPossible(int arr[], int k, int size, int mid)
{

int cowCount = 1;
int lastCow = arr[0];

for(int i = 0; i<size; i++)
{
    if(arr[i] - lastCow >= mid)
    {
        cowCount++;
        if(cowCount == k)
        {
            return true;
        }
        lastCow = arr[i];
    }
}
return false;

}


int aggressiveCows(int arr[], int k, int size)
{
//sort(arr.begin(), arr.end());

//int n = sizeof(arr) / sizeof(arr[0]);
//sort(arr, arr + n);

int start = 0;
int maxi = -1;

for(int i = 0; i<size; i++)
{
    maxi = max(maxi, arr[i]);
}

int end = maxi;

int mid = (start + end ) / 2;
int ans;

while(start <= end)
{
    if(isPossible(arr, k, size, mid))
    {
        ans = mid;
        start = mid  + 1;
    }
    else{
        end = mid - 1;
    }
    mid = (start + end ) / 2;
}
return ans;
}


int main()
{
int arr[5] = {4, 2, 1, 3, 6};
int size = 5;

int n = sizeof(arr) / sizeof(arr[0]);
sort(arr, arr + n);


int k;
cout<<"Enter the number of cows"<<endl;
cin>>k;

//int ans1 = isPossible(arr, k, size, mid);

int ans2 = aggressiveCows(arr, k, size);
cout<<"Cows must be placed at the maximum distance of: "<<ans2<<endl;

}
