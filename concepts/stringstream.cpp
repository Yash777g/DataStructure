#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// used for input/output

// A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin). 
// To use stringstream, we need to include sstream header file. The stringstream class is extremely useful in parsing input. 

/*Basic methods are:

clear()- To clear the stream.
str()- To get and set string object whose content is present in the stream. 
operator <<- Add a string to the stringstream object. 
operator >>- Read something from the stringstream object.

*/

// extracting integers from a string using string stream
// values are seperated by a comma
void sstreamIntegers(string str) {
    stringstream st(str);
    int num; char ch;

    // st >> num used to extract numbers from string.
    while(st >> num) {
        cout << num << " ";

        // this helps extracting any non integer character present in the string.
        // if a string is present then use string to extract integers.
        st >> ch;
    }
    return;
}

int main() {
    string str = "hello world"; 
    stringstream ss(str);

    // count no of words in a string by string streamn
    int count = 0;
    string word;

    while(ss >> word) {
        count++;
    } cout << count << endl;


    string str1 = "23,13,145";
    sstreamIntegers(str1);
    return 0;
}