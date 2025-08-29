/*
Design your implementation of the linked list. You can choose to use a singly or doubly linked list.
A node in a singly linked list should have two attributes: val and next. val is the value of the current node, and next is a pointer/reference to the next node.
If you want to use the doubly linked list, you will need one more attribute prev to indicate the previous node in the linked list. Assume all nodes in the linked list are 0-indexed.

Implement the MyLinkedList class:

MyLinkedList() Initializes the MyLinkedList object.
int get(int index) Get the value of the indexth node in the linked list. If the index is invalid, return -1.
void addAtHead(int val) Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
void addAtTail(int val) Append a node of value val as the last element of the linked list.
void addAtIndex(int index, int val) Add a node of value val before the indexth node in the linked list. If index equals the length of the linked list, the node will be appended to the end of the linked list. If index is greater than the length, the node will not be inserted.
void deleteAtIndex(int index) Delete the indexth node in the linked list, if the index is valid.
*/

#include <iostream>
using namespace std;

class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };
    
    Node* head;
    Node* tail;
    int size;

public:
    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size) return -1; // out of bounds
        Node* temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newnode = new Node(val);
        if (!head) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* newnode = new Node(val);
        if (!tail) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return; // invalid
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        
        Node* newnode = new Node(val);
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return; // invalid
        
        if (index == 0) { // delete head
            Node* temp = head;
            head = head->next;
            if (size == 1) tail = nullptr; // list becomes empty
            delete temp;
            size--;
            return;
        }
        
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        Node* delNode = temp->next;
        temp->next = delNode->next;
        if (delNode == tail) tail = temp; // if deleting last node
        delete delNode;
        size--;
    }

    // Helper function to print the linked list
    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// --------------------- MAIN FUNCTION ---------------------
int main() {
    MyLinkedList myList;

    // Add at head
    myList.addAtHead(10);
    myList.addAtHead(20);
    myList.addAtHead(30);
    cout << "After adding at head: ";
    myList.printList();

    // Add at tail
    myList.addAtTail(40);
    myList.addAtTail(50);
    cout << "After adding at tail: ";
    myList.printList();

    // Add at index
    myList.addAtIndex(2, 25); // insert at index 2
    cout << "After inserting 25 at index 2: ";
    myList.printList();

    // Get value
    cout << "Value at index 3: " << myList.get(3) << endl;

    // Delete at index
    myList.deleteAtIndex(2); // delete node at index 2
    cout << "After deleting node at index 2: ";
    myList.printList();

    myList.deleteAtIndex(0); // delete head
    cout << "After deleting head: ";
    myList.printList();

    myList.deleteAtIndex(3); // delete tail
    cout << "After deleting tail: ";
    myList.printList();

    return 0;
}
