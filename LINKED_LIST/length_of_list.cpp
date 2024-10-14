#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

int count_length_of_linkedlist(struct Node* head){

    int count = 0 ;
    while(head){
       Node* curr=head;
       head= curr->next;
       count++;
      
    }
     return count;
}
int main (){
Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    
    int length = count_length_of_linkedlist(head);
    cout << "Length of the linked list: " << length << endl;

    return 0 ;

}