#include <iostream>
#include <vector>
using namespace std;

void solve(vector<string> &paranthesis, string &validOne, int left, int right, int total) {
    if(left + right == total * 2) {
        paranthesis.push_back(validOne);
        return;
    }

    if(left < total) {
        validOne.push_back('(');
        solve(paranthesis, validOne, left + 1, right, total);
        validOne.pop_back();
    }

    if(right < left) {
        validOne.push_back(')');
        solve(paranthesis, validOne, left, right + 1, total);
        validOne.pop_back();
    } 
}

vector<string> generateParenthesis(int n) {
    if(n == 1) return {"()"};
    vector<string> paranthesis;
    string validOne = "(";

    int left = 1, right = 0;
    solve(paranthesis, validOne, left, right, n);

    return paranthesis;
}

int main() {
    vector<string> result = generateParenthesis(3);
    
    for(auto i : result) {
        cout << i << "  ";
    }
    return 0;
}