class Solution {
   public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
    unordered_map<char, string> phonemap = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"},
                                            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
                                            {'8', "tuv"}, {'9', "wxyz"}};

    vector<string> result = {""};
    for (char d : digits) {
        vector<string> temp;
        string letters = phonemap[d];
        for (string& combo : result) {           // each existing combo
            for (char letter : letters) {        // each new letter
                temp.push_back(combo + letter);  // append & store
            }
        }
        result = temp;
    }
    return result;
    }
};
