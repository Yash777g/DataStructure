#include <iostream>
#include <algorithm>
using namespace std;

string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0") return "0";

    int size1 = num1.size(), size2 = num2.size();
    string ans(size1 + size2, '0');

    for (int i = size1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = size2 - 1; j >= 0; j--) {
            int idx = (size1 - 1 - i) + (size2 - 1 - j);

            int sum = (ans[idx] - '0')
                    + (num1[i] - '0') * (num2[j] - '0')
                    + carry;

            ans[idx] = (sum % 10) + '0';
            carry = sum / 10;
        }

        if (carry > 0) {
            ans[(size1 - 1 - i) + size2] =
                (ans[(size1 - 1 - i) + size2] - '0' + carry) + '0';
        }
    }

    while (ans.size() > 1 && ans.back() == '0') {
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string num1 = "999", num2 = "99";
    cout << multiply(num1, num2); 

    return 0;
}