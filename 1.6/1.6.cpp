#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string stringCompression(string x) {
    int count = 1;
    char current = x[0];
    string out;
    for (unsigned i = 1; i < x.length(); i++) {
        if (x[i] == current) {
            count++;
        } else {
            out += current + to_string(count);
            count = 0;
            current = x[i];
            i--;
        }
    }
    out += current + to_string(count);
    return out;
}

int main() {
    string x1 = "aabcccccaaa";
    cout << stringCompression(x1) << endl;
    return 0;
}