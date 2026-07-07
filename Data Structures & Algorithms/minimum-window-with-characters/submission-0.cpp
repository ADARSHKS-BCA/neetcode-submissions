class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        // Frequency map of t
        for (char c : t)
            need[c]++;

        int have = 0;
        int needCount = need.size();

        int left = 0;

        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {

            char c = s[right];
            window[c]++;

            // Check if this character now satisfies the required frequency
            if (need.count(c) && window[c] == need[c])
                have++;

            // Shrink while the window is valid
            while (have == needCount) {

                // Update minimum window
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // Remove leftmost character
                window[s[left]]--;

                // If removing it breaks the requirement
                if (need.count(s[left]) &&
                    window[s[left]] < need[s[left]]) {
                    have--;
                }

                left++;
            }
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};