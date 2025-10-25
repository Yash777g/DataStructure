#include <iostream>
#include <vector>
using namespace std;

string intToRoman(int num) {
    vector<pair<int, string>> table = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
        {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"},
        {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string result = "";
    
    while(num != 0) {
        for (int i = 0; i < table.size(); i++) {
            if (num >= table[i].first) {
                result += table[i].second;
                num -= table[i].first;
                break;
            }
        }
    }

    return result;
}

int main() {
    int num = 3749;

    string sol = "";
    sol = intToRoman(num);

    cout << sol;
    return 0;
}