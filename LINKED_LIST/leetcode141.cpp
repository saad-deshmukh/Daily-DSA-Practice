//DETECTING THE CYCLE IN THE LINKED LIST

#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        // Traverse the list with two pointers
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next; // Move fast pointer two steps
            slow = slow->next;       // Move slow pointer one step

            // If fast and slow meet, there's a cycle
            if (fast == slow) {
                return true;
            }
        }

        // If we reach here, no cycle exists
        return false;
    }
};

// Example usage
int main() {
    // Create a list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Create a cycle for testing: connect 5 -> 2
    head->next->next->next->next->next = head->next;

    Solution solution;
    bool result = solution.hasCycle(head);
    if (result) {
        std::cout << "Cycle detected in the linked list.\n";
    } else {
        std::cout << "No cycle in the linked list.\n";
    }

    // Note: Proper memory cleanup is not shown here for simplicity.
    // In production code, ensure to free memory if no cycle exists.

    return 0;
}
