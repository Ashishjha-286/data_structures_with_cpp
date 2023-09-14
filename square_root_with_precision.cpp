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


double morePrecision(int n, int precision, int tempSol)
{
double factor = 1;
double ans1 = tempSol;

for(int i = 0; i<precision; i++)
{
    factor = factor / 10;
    for(double j = ans1; j*j<n; j+=factor)
    {
        ans1 = j;
    }

}
return ans1;
//return j;

}



int main()
{
int n;
cout<<"Enter a number to find its square root:"<<endl;
cin>>n;


int tempSol = binarySearch(n);
//cout<<"The square root of the number is :"<<" "<<x<<endl;

double actual_ans = morePrecision(n, 4, tempSol);
cout<<"Square root of the number with precision is: "<<actual_ans<<endl;

}
