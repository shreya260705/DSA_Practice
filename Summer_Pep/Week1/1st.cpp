#include<iostream>
using namespace std;
int main(){
    // int marks=70;
    // int leave=5;
    // // cin>>marks>>leave;
    // if(marks>50 &&leave<10){
    //     cout<<"leaved passed";
    // }
    // else{
    //     cout<<"leave failed";
    // }

    // char grade='A';
    // switch(grade){
    //     case 'A':
    //     cout<<"A grade"<<endl;
    //     break;
    //     case 'B':
    //     cout<<"B grade"<<endl;
    //     break;
    //     case 'C':
    //     cout<<"C grade"<<endl;
    //     break;
    //     default:
    //     cout<<"invalid"<<endl;
// }
    // int x=5;
    // int y=8;
    // int f= (x>y?x:y);
    // cout<<f;
    // int i=0;
    // while(i<5){
    //     cout<<i<<" ";
    //     i++;
    // }
   
    int n ;
    cout<<"Enter the size";
    cin>>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             if (i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}

           

