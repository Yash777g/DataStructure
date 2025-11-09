#include <iostream>
using namespace std;

// implementing nested structure
struct features {
    int modelno;
    string company;
    string engine;
};

struct car {
    string color;
    string category;
    struct features feat;
};

int main() {
    car first;
    
    // accessing members of car and features structure
    first.color = "black";
    first.category = "sports";
    
    first.feat.company = "ferrari";
    first.feat.engine = "V8";
    first.feat.modelno = 12;
    
    return 0;
}