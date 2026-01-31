#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// transpose and rotate
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(begin(matrix[i]) , end(matrix[i]));
    }   
}

int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);

    for(auto i : matrix) {
        for(auto j : i) {
            cout << j << " ";
        } cout << endl;
    }
    return 0;
}