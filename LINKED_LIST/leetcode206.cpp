/*Given the head of a singly linked list, reverse the list, and return the reversed list.
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
*/

#include<list>
#include<iostream>
using namespace std ;

class Listnode {
  public:

    int data ;
    Listnode* next ;
    Listnode(int val){
        data = val;
        next  = NULL;
    }
};

Listnode*  reverselist (Listnode* head)
{
       Listnode *prev = NULL ;
       Listnode *curr = head ;
       Listnode *next = NULL ;

       while(curr != NULL){
        next  = curr -> next;
        curr-> next = prev;
        prev = curr;
        curr = next ;
       }

       return prev;     

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
    // Create linked list: 1 -> 2 -> 3 -> NULL
    Listnode* head = new Listnode(1);
    head->next = new Listnode(2);
    head->next->next = new Listnode(3);

    cout << "Original List: ";
    printList(head);

    head = reverselist(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
