#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    try {
        size_t pos;
        int n = stoi(s, &pos);
        if (pos == s.length() && n >= -100 && n <= 100) {
            cout << "Valid";
        } else {
            cout << "Invalid";
        }
    } catch (...) {
        cout << "Invalid";
    }
    
    return 0;
}
