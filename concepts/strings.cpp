#include <iostream>
using namespace std;

int main() {
    // string implementation using array
    char str[10] = "";

    // dynamic string initialization and declaration
    string name = "yash";

    // used to append something at last of string.
    cout << name.append(" hi") << endl;

    // return character at that index
    cout << name.at(1) << endl;

    // check for empty string
    cout << name.empty() << endl;

    // find the occurence of character and the return the first index at which it was founded
    cout << name.find('h') << endl;

    // delete/erase a part of string
    cout << name.erase(4,6) << endl;

    // insert a specific position
    cout << name.insert(2,"em") << endl;

    // return the lenght of string
    cout << name.length() << endl;

    // replace part of string start to ending - 1 index to a new string
    cout << name.replace(0,2,"t") << endl;

    // return a substring of a string from any index to ending - 1 index
    cout << name.substr(0,3) << endl;

    // swap two string 
    string sw = "kill";
    name.swap(sw);
    cout << name << endl; 

    // clear/empty string
    name.clear();
    return 0;
}