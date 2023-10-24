#include<iostream>
using namespace std;

int main()
{
int arr1[9] = {2, 0 ,5, 0 , 1, 3, 0, 0, 7};
int size = 9;

int i = 0, j =0;

for( ; j<size; j++)
{
    if(arr1[j] != 0){
        swap(arr1[i], arr1[j]);
        i++;
    }
}

cout<<"Printing the array after moving all zeroes: "<<endl;
for(int k = 0; k<size; k++)
{
    cout<<arr1[k]<<" ";
}
cout<<endl;



}
