#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int sum = 0;
    int prod = 1;

    while(n!=0)
    {
        int digit = n%10;
        sum+=digit;
        prod = prod * digit;

        n = n/10;
    }

    int answer = prod - sum;

    cout<<answer<<endl;



}
