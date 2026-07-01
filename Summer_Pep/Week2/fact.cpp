// int fact(int n){
//     if(n==0||n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int fib(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return fib(n-1)+fib(n-2);
// }

#include <iostream>
using namespace std;
void print(int arr[3][4],int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(j%2==0){
                cout<<arr[i][j]<<" ";
            }
        }
}
};
int main(){
    int arr[3][4];
    int rows=3;
    int cols=4;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           cin>>arr[i][j];
        }
    }
    print(arr,rows,cols);
    return 0;
}