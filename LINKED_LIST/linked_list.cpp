#include<bits/stdc++.h>
using namespace std;
// Creating the linked list 
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

  
int main() {
    // inserting the node at the begining of the linked list 
    Node* Head = nullptr;
    int arr[]={20,30,40,50};
    
  for(int i =0;i<4;i++){
   if(Head == NULL){
    Head = new Node(arr[i]);
   }
   else{
    Node* temp;
    temp=new Node(arr[i]);
    temp->next = Head;
    Head=temp;
   }
  }

  Node *temp = Head ;
  while(temp != NULL){
    cout << temp->data << " " ;
     temp =  temp->next;
  };
}