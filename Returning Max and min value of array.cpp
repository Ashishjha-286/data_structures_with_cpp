#include<iostream>
using namespace std;



int getMax(int num[], int n)
{
    int max = INT_MIN;

    for(int i = 0; i<n; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }
    //Returning max value
    return max;
}

int getMin(int num[], int n)
{
    int min = INT_MAX;

    for(int i = 0; i<n; i++)
    {
        if(num[i] < min)
        {
            min = num[i];
        }
    }
    //Returning max value
    return min;
}



int main()
{
int size;
cout<<"Enter the size of the array:"<<endl;
cin>>size;

cout<<endl;
int num[100];
for(int i = 0; i<size; i++)
{
    cin>>num[i];
}

cout<<"The maximum value from the given array is:"<<getMax(num,size)<<endl;
cout<<"The minimum value from the given array is:"<<getMin(num,size)<<endl;


}
