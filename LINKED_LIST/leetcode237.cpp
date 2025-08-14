/*
237. Delete Node in a Linked List
Solved
Medium
Topics
premium lock icon
Companies
There is a singly-linked list head and we want to delete a node node in it.

You are given the node to be deleted node. You will not be given access to the first node of head.

All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:

The value of the given node should not exist in the linked list.
The number of nodes in the linked list should decrease by one.
All the values before node should be in the same order.
All the values after node should be in the same order.
Custom testing:

For the input, you should provide the entire linked list head and the node to be given node. node should not be the last node of the list and should be an actual node in the list.
We will build the linked list and pass the node to your function.
The output will be the entire list after calling your function.
*/


#include <iostream>
using namespace std;

struct Listnode {
    int data;
    Listnode* next;
    Listnode(int val) {
        data = val;
        next = NULL;
    }
};

void deleteNode(Listnode* node) {
    Listnode* temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
    delete temp; // free the skipped node's memory
}

void printList(Listnode* head) {
    Listnode* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create linked list: 4 -> 5 -> 1 -> 9
    Listnode* head = new Listnode(4);
    head->next = new Listnode(5);
    head->next->next = new Listnode(1);
    head->next->next->next = new Listnode(9);

    cout << "Original List: ";
    printList(head);

    // Delete the node with value 5 (pointer to it is given)
    deleteNode(head->next);

    cout << "After Deleting Node: ";
    printList(head);

    return 0;
}
