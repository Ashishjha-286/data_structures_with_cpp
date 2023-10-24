#include<iostream>
using namespace std;

int main()
{

int arr[5] = {3, 5, 6, 7, 9};
int s = 5;

int k;
cout<<"Enter the value of k: "<<endl;
cin>>k;

int temp[5];

for(int i = 0 ; i<s; i++)
{
    temp[(i+k) % s] = arr[i];

}

//temp[] = arr[];
cout<<"Printing the rotated array: "<<endl;
for(int i = 0; i<s ;i++)
{
    cout<<temp[i]<<" ";
}


}
