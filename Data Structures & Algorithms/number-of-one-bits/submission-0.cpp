class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0)
       {
        count +=(n&1);// checks if the value is 1 if  true updates it to 1 or else 0
        n=n>>1;
       }
       return count;
    }
};
