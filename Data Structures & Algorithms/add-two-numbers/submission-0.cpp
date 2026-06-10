class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry) {
            int left = l1 != nullptr ? l1->val : 0;
            int right = l2 != nullptr ? l2->val : 0;

            int sum = left + right + carry;
            carry = sum / 10;
            int digit = sum % 10;

            curr->next = new ListNode(digit);
            curr = curr->next;

            l1 = l1 != nullptr ? l1->next : nullptr;
            l2 = l2 != nullptr ? l2->next : nullptr;
        }

        return dummy->next;
    }
};