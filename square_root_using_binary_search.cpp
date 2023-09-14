#include<iostream>
using namespace std;

int binarySearch(int num)
{
int start = 0;
int end = num;

int mid = (start + end) / 2;
int ans;


while(start < end)
{   int square = mid * mid;
    if(square > num){
        end = mid - 1;
    }


    else if(square == num){
        return mid;
    }

    else{
        ans = mid;
        start = mid + 1;
    }
    mid = (start + end) / 2;
}
return ans;
}

int main()
{
int n;
cout<<"Enter a number to find its square root:"<<endl;
cin>>n;

//int arr1[n];

int x = binarySearch(n);
cout<<"The square root of the number is :"<<" "<<x<<endl;

}
