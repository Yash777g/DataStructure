#include<iostream>
#include<vector>
using namespace std;

// frequency array is a mapping of number to a number or any other data type
// it act as a ordered map with less space complexity than map.

int main() {
    vector<int> nums {1,2,3,2};
    vector<int> freq;

    for(auto i : nums) { freq[i]++; }

    string str = "aabbbccccddddd";
    vector<int> freqChar;
    
    for(auto ch : str) {
        freq[ch - 'a']++;
    }
    return 0;
}