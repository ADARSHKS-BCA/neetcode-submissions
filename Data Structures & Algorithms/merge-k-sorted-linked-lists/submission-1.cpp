/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> min;
        for(ListNode* head: lists){
            while(head!= nullptr){
                min.push(head->val);
                head=head->next;
            }
        }
        ListNode dummy;
        ListNode* merge= &dummy;
        while(!min.empty()){
            merge->next=new ListNode(min.top());
            min.pop();
            merge= merge->next;
        }
        return dummy.next;
    }
};
