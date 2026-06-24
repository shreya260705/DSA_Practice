// #include <iostream>
// #include<vector>
// using namespace std;

// int main(){
// int  a=10;
// int *ptr=&a;
// cout<<&a<<endl;
// cout<<ptr<<endl;
// cout<<(*ptr+1)<<endl;
// cout<<*(ptr+1)<<endl;
// return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec1 = {1,2,3,4,5,7,5,3};

    cout << vec1.at(3) << endl;   

    vec1.push_back(10);

    cout << vec1.back() << endl;  

    vec1.pop_back();

    cout << vec1.back() << endl;  

    cout << vec1.size() << endl;  

    return 0;
}
