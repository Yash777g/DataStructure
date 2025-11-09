#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

int myAtoi(string s) {
    if(s == "" || isdigit(s[0]) == false) return 0;

    int sign = 1, ans = 0;
    int index = 0;

    // for skipping the whitespaces at front of string
    while(index < s.size() && s[index] == ' ') index++;

    // getting the sign of integer thus formed
    if(index < s.size() && (s[index] == '-' || s[index] == '+')) {
        sign = (s[index] == '-') ? -1 : 1;
        index++;
    }

    while(index < s.size() && isDigit(s[index])) {
        int digit = s[index] - '0';
        
        // Handle overflow (for 32-bit int)
        if(ans > (INT32_MAX - digit) / 10) {
            return (sign == 1) ? INT32_MAX : INT32_MIN;
        }

        ans = ans * 10 + digit;
        index++;
    }

    return ans * sign;
}

int main() {
    string s = "042";
    cout << myAtoi(s);
    return 0;
}