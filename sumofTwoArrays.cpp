#include<iostream>
using namespace std;


int sumArray(int arr1[], int arr2[], int s1, int s2, int ans[], int size)
{
    int carry = 0;
    int i = s1 - 1;
    int j = s2 - 1;
    //int ans[5];

    while(i>=0 && j>=0){
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;

        ans[i] = sum;
        i--; j--;
    }

    while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;

        ans[i] = sum;
        i--;
    }

    while(j>=0){
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;

        ans[i] = sum;
        j--;
    }

    while(carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;

        ans[i] = sum;
    }
}

printArray(int arr1[], int arr2[], int s1, int s2, int ans[], int size)
{
    cout<<"Array after sum is: ";
    for(int k = 0; k<size; k++){
        cout<<ans[k]<<" ";
    }
}




int main()
{
int arr1[5] = {2, 3, 6, 4, 7};
int arr2[3] = {1, 2, 3};

int s1 = 5;
int s2 = 3;

int ans[5];
int size = 5;

sumArray(arr1, arr2, s1, s2, ans, size);
//reverseArray();
printArray(arr1, arr2, s1, s2, ans, size);

}
