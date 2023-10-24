#include<iostream>
using namespace std;


checkRotated(int arr[], int s)
{
    int count = 0;
    for(int i = 1; i<s; i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }

    if(arr[s-1] > arr[0]){
        count++;
    }


    //return count<=1;
    if(count<=1){
        cout<<"It is a rotated sorted array"<<endl;
    }

    else{
        cout<<"Not a rotated sorted array"<<endl;
    }

}


int main()
{
int arr[6] = {7, 8, 9, 2, 4, 5};
int size = 6;

checkRotated(arr, size);
//printArray(arr, size);

}
