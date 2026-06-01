class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // Push opening brackets
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                // Peek top and check if it matches
                if (st.empty()) return false;  // nothing to match with

                char top = st.top();  // peek
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop();  // match found, pop it
                } else {
                    return false;  // mismatch
                }
            }
        }

        // Stack must be empty — every open was closed
        return st.empty();
    }
};