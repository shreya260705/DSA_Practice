#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    st.push(5);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(7);

    cout << "Top element: " << st.top() << endl; 

    st.pop(); 

    cout << "New top element: " << st.top() << endl; 

    while (!st.empty()) {
        cout << st.top() << " ";  
        st.pop();                 
    }
    return 0;
}
