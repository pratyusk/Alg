#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void URLify(string &x, int n) {
    int count = 0;
    vector<int> ind;
    int spaceCount = 0;
    for (unsigned int i = 0; i < n; i++) {
        if (x[i] == ' ') {
            ind.push_back(i);
            spaceCount++;
        }
    }
    for (unsigned int i = 0; i < spaceCount; i++) {
        x.replace(i * 2 + ind[i], 1, "%20");
    }
    
}

int main() {
    string x = "Mr John Smith    ";
    URLify(x, 13);
    cout << x;
    return 0;
}