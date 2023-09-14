#include<iostream>
using namespace std;

int printArray(int arr1[], int size)
{
    cout<<"The array after function call is:"<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr1[i]<<" ";
    }
}

int sortArray(int arr1[], int size)
{
int i = 0;
int j = size-1;

while(i<j)
{
    if(arr1[i] == 0 && i<j){
        i++;
    }

    else if(arr1[j] == 1 && i<j){
        j--;
    }

    else if(arr1[i]==1 && arr1[j] == 0 && i<j)
    {
        swap(arr1[i], arr1[j]);
        i++;
        j--;
    }
}
}






int main()
{

int n;
cout<<"Enter the size of the array:"<<endl;
cin>>n;

int arr1[100];
cout<<"Enter the elements of the array in 0 and 1 format:"<<endl;
for(int i = 0; i<n; i++)
{
    cin>>arr1[i];
}

sortArray(arr1, n);
printArray(arr1, n);

}
