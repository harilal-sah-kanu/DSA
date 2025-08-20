#include <bits/stdc++.h>
using namespace std;

void generateString(int n, string str) {
    if(str.length() == n) {
        cout << str << endl;
        return;
    }

    generateString(n, str + "0");
    generateString(n, str + "1");
}

int main() {
    int n;
    cout << "Enter String Length: ";
    cin >> n;

    generateString(n, "");


    return 0;
}