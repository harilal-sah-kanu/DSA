#include <bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string str) {
    stack<char> st;

    for(char ch : str) {
        if(ch == '(' || ch == '[' || ch == '{') st.push(ch);
        else {
            if(!st.empty() && st.top() == '(' && ch == ')') st.pop();
            else if(!st.empty() && st.top() == '{' && ch == '}') st.pop();
            else if(!st.empty() && st.top() == '[' && ch == ']') st.pop();
            else return false;
        }
    }

    return st.size() == 0;
}

int main() {
    string str;
    cout << "Enter Bracket String: ";
    cin >> str;

    bool result = isValidParenthesis(str);

    if(result) cout << "Valid Parenthesis" << endl;
    else cout << "Not a Valid Parenthesis" << endl; 

    return 0;
}