#include <iostream>
#include <stack>
using namespace std;

int main() {
    // stack implementation using standard template library where stack is already included
    
    // initialization of a stack 
    stack<int> st;

    st.push(5);
    st.push(6);
    st.push(9);
    st.push(1);
    st.push(4);

    cout << st.top() << endl;
    cout << st.empty() << endl;
    return 0;
}