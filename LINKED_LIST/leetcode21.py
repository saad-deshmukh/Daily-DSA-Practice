'''You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing
together the nodes of the first two lists.

Return the head of the merged linked list.
Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:
Input: list1 = [], list2 = []
Output: []
Example 3:
Input: list1 = [], list2 = [0]
Output: [0]
'''
class ListNode:
    def __init__(self,val):
        self.val = val
        self.next = None
Node1 = ListNode(10)
Node1.next = ListNode(20)
Node1.next.next = ListNode(30)

Node2 = ListNode(40)
Node2.next = ListNode(50)
Node2.next.next = ListNode(60)

def MergeLists(Node1,Node2):
    dummy = ListNode(0)
    curr = dummy

    while Node1 and Node2:
        if Node1.val <= Node1.val:
            curr.next = Node1
            Node1 = Node1.next
        else:
            curr.next = Node2
            Node2 = Node2.next
        curr = curr.next
    if Node1:
        curr.next = Node1
    else:
        curr.next = Node2
    return dummy.next

merged = MergeLists(Node1, Node2)

temp = merged
while temp:
    print(temp.val, end=" -> ")
    temp = temp.next
print("None")

    

