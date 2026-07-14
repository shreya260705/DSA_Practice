#include<iostream>
using namespace std;
int solve(int arr[],int i, int j){
    if(i>=j) return 0;
    int min=INT_MAX;
    for(int k=i;k<j;k++){
        int temp=solve(arr,i,k)+solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
        if(temp<=min){
            min=temp;
        }
    }
    return min;
}