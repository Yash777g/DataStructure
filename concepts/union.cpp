#include <iostream>
using namespace std;

union student {
    int roll;
    int marks;
}; student s1;

int main() {
    s1.roll = 1;
    cout << s1.roll << endl; 
    
    s1.marks = 100;
    cout << s1.marks << endl;
    return 0;
}