#include <iostream>
using namespace std;

// structure initialization and declaration in main function and outside structure
struct Student {
    int roll;
    string name;
    float marks;

    void detials();
}; Student s1;

void Student :: detials(){
    cout << name << " - " << roll << endl; 
}

int main() {
    s1.roll = 1;
    s1.name = "Alice";
    s1.marks = 97;

    s1.detials();

    Student s2;
    s2.roll = 2;
    s2.name = "Alex";
    s2.marks = 95;

    s2.detials();
    return 0;
}