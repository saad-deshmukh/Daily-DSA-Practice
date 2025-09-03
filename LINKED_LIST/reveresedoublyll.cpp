#include <iostream>
using namespace std;

// Definition of Node
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Solution {
public:
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;   // store next
            curr->next = prev;   // reverse pointer
            prev = curr;         // move prev ahead
            curr = next;         // move curr ahead
        }
        return prev; // new head
    }
};

// Utility function to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Utility function to insert node at beginning
void push(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

int main() {
    Node* head = NULL;

    // Create list 1->2->3->4->5
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    cout << "Original Linked List: ";
    printList(head);

    Solution obj;
    head = obj.reverse(head);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}
