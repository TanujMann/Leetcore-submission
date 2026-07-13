# Valid Parentheses

- Topic: Stack
- Pattern: matching-brackets
- Submitted from: Leetcore
- Submitted at: 2026-07-13T13:58:14.229Z

## Solution

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            if (st.empty()) {
                cout << "false";
                return 0;
            }

            if ((st.top() == '(' && ch == ')') ||
                (st.top() == '{' && ch == '}') ||
                (st.top() == '[' && ch == ']')) {
                st.pop();
            }
            else {
                cout << "false";
                return 0;
            }
        }
    }

    if (st.empty())
        cout << "true";
    else
        cout << "false";

    return 0;
}
