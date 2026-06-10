class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int> s1_map,window_map;
        for(int i=0;i<s1.size();i++){
            s1_map[s1[i]]++;
            window_map[s2[i]]++;
        }
        if(s1_map==window_map)return true;
        for(int i=s1.size();i<s2.size();i++){
            window_map[s2[i]]++;
             char out=s2[i-s1.size()];
             window_map[out]--;
             if(window_map[out]==0){
                window_map.erase(out);
             }
               if (s1_map == window_map) return true;
        }
        return false;
    }
};
