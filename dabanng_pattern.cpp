#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        int start = 1;
        while(j<=n-i+1)
        {
            cout<<start;
            start++;
            j = j +1;
        }

        int star = i-1;
        while(star)
        {
            cout<<"*";
            star = star -1;
        }

        int star2 = i -1;
        while(star2)
        {
            cout<<"*";
            star2--;
        }

        int count = n-i+1;
        while(count)
        {
            cout<<count;
            count = count - 1;
        }

        cout<<endl;
        i = i + 1;
    }
}
