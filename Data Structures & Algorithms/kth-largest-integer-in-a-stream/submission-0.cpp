class KthLargest {
public: 
    priority_queue<int,vector<int>,greater<int>> minheap;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(auto num:nums){
            add(num);
        }
    }
    
    int add(int val) {
        if(minheap.size()<k){
            minheap.push(val);
        }
        else if(val>minheap.top()){
            minheap.pop();
            minheap.push(val);
        }
        return minheap.top();
    }
};
