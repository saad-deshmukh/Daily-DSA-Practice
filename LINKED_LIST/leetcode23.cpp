/*You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

 

Example 1:

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted linked list:
1->1->2->3->4->4->5->6
Example 2:

Input: lists = []
Output: []
Example 3:

Input: lists = [[]]
Output: []
*/

#include <bits/stdc++.h>
using namespace std ;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class solution{
  public: 
  Node* mergeKLists(vector<Node*>& arr) {
   // convert all the elements in all linked lists into an array
    vector<int> ans ; 
    for(int i=0;i<arr.size();i++){

        Node* temp = arr[i];
        while(temp != NULL){
         ans.push_back(temp->data);
         temp = temp->next;
        }
    }
     // step 2 sort that array
     sort(ans.begin(),ans.end());

     // step 3 create dummy list to again restore the sorted list

     Node* dummy = new Node(0);
     Node* curr = dummy;

     for(int val: ans ){
        curr->next = new Node (val);
        curr = curr->next;
     }
     return dummy->next;
  } 
};
  // Helper function to create a linked list from a vector<int>
Node* createList(vector<int> vals) {
    if (vals.empty()) return NULL;
    Node* head = new Node(vals[0]);
    Node* curr = head;
    for (int i=1; i<vals.size(); i++) {
        curr->next = new Node(vals[i]);
        curr = curr->next;
    }
    return head;
}

// Helper function to print a linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main(){
     
   // Step 1: Create test linked lists
    vector<Node*> lists;
    lists.push_back(createList({1,4,5}));
    lists.push_back(createList({1,3,4}));
    lists.push_back(createList({2,6}));

    // Step 2: Merge them
    solution sol;
    Node* mergedHead = sol.mergeKLists(lists);

    // Step 3: Print result
    cout << "Merged Linked List:" << endl;
    printList(mergedHead);

    return 0;
    
}