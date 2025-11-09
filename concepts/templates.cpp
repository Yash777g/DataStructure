#include <iostream>
using namespace std;

// used in compile-time polymorphism
// can take many forms ex: maxx function can be used for various data types.
template <typename T> 
T maxx(T a, T b) {
    return (a > b) ? a:b;
}

int main() {
    char a = 'a', b = 'v';
    int ans = maxx<char>(a, b);

    cout << ans;
    return 0;
}
