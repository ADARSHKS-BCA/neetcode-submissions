/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        // Pass 1: Insert copy nodes after originals
        Node* curr = head;
        while (curr) {
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        // Pass 2: Set random pointers
        curr = head;
        while (curr) {
            if (curr->random)
                curr->next->random = curr->random->next;

            curr = curr->next->next;
        }

        // Pass 3: Separate the two lists
        Node* dummy = new Node(0);
        Node* copyCurr = dummy;
        curr = head;

        while (curr) {
            Node* copy = curr->next;

            // Build copied list
            copyCurr->next = copy;
            copyCurr = copy;

            // Restore original list
            curr->next = copy->next;

            curr = curr->next;
        }

        return dummy->next;
    }
};

// did it using chat gpt