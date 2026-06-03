class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int maxfreq=0;
        int result =0;
        unordered_map<char,int>freq;
        for(int right =0;right<s.size();right++){
            freq[s[right]]++;
            maxfreq=max(maxfreq,freq[s[right]]);
            int windowsize=right-left+1;
            if(windowsize-maxfreq>k){
                freq[s[left]]--;
                left++;
            }
            result= max(result,right-left+1);
        }
        return result;
    }
};
