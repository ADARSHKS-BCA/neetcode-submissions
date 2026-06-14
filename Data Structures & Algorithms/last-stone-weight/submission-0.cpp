class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxheap(stones.begin(),stones.end());
        while(maxheap.size()>1){
            int a=maxheap.top();maxheap.pop();
            int b=maxheap.top();maxheap.pop();
            if(a!=b){
                maxheap.push(a-b);
            }
        }
        if(maxheap.empty()) return 0;
        else return maxheap.top();
    }
};
