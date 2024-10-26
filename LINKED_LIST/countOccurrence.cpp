// Given a singly linked list and a key, count the number of occurrences of the given key in the linked list.

// Examples:

// Input: Linked List: 1->2->1->2->1->3->1, key = 1

// Output: 4
// Explanation: 1 appears 4 times. 

#include <iostream>
using namespace std;

// Node class to represent each element in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// LinkedList class to manage the linked list
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Method to insert a new node at the end of the linked list
    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            return;
        }
        Node* last = head;
        while (last->next) {
            last = last->next;
        }
        last->next = newNode;
    }

    // Method to count occurrences of a given value
    int countOccurrences(int target) {
        int count = 0;
        Node* current = head;
        while (current) {
            if (current->data == target) {
                count++;
            }
            current = current->next;
        }
        return count;
    }
};

int main() {
    LinkedList ll;
    ll.append(1);
    ll.append(2);
    ll.append(1);
    ll.append(3);
    ll.append(1);

    // Count occurrences of '1'
    int target = 1;
    cout << "Number of occurrences of " << target << ": " << ll.countOccurrences(target) << endl;

    return 0;
}
