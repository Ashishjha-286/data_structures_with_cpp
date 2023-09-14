#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of times you want fibonacci series to print:"<<endl;
    cin>>n;

    int a = 0;
    int b  = 1;

    cout<<a<<" "<<b<<" ";

    for(int i = 1; i<=n; i++)
    {
        int nextN = a + b;
        cout<<nextN<<" ";

        a=b;
        b=nextN;


    }

}
