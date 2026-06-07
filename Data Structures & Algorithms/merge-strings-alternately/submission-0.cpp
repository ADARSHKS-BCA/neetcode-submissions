class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int l=0;
       int r=0;
       string res;
       while(l<word1.size() || r<word2.size()){
        if(l<word1.size()) res+=word1[l++];
          if(r<word2.size()) res+=word2[r++];
       } 
       return res;
    }
};