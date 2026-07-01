#include <bits/stdc++.h>
using namespace std;
bool search(int arr[][3],int row, int col, int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target) return true;
        }
    }
    return false;
}

//print the value of max sum and also its row index 
//if multiple rows have same max sum, return the index of last row
void sum(int arr[][3],int row,int col){
    int maxs=INT_MIN;
    int maxr=-1;
    for(int i=0;i<row;i++){
        int rsum=0;
        for(int j=0;j<col;j++){
            rsum+=arr[i][j];
        }
        cout<<"sum at index " <<i <<": "<<rsum<<endl;

        if(rsum>=maxs){
            maxs=rsum;
            maxr=i;
        }
         
    }
    cout<<maxs<<endl;
    cout<<maxr<<endl;
}
int main()
{
    int arr[3][3]={1,1,1,1,1,1,1,1,1};
    int row=3;
    int col=3;
    int target=5;
    cout<< search(arr,row,col,target)<<endl;
    sum(arr,row,col);
    return 0;
}