''' Tree Traversal In Python'''
class treenode:
    def __init__(self,val):
        self.val = val
        self.left = None
        self.right = None
node = treenode(10)
node.left = treenode(20)
node.right = treenode(30)
node.left.left= treenode(40)
node.left.right= treenode(50)
node.right.right = treenode(60)
node.right.left = treenode(70)

#preorder traversal
def preorder(node):
    if node == None:
        return 
    print(node.val)
    preorder(node.left)
    preorder(node.right)
#preorder(node)

#Post Order Traversal
def postorder(node):
    if node is None:
         return
    postorder(node.left)
    postorder(node.right)
    print(node.val,end=" ", )
#postorder(node)

#In Order Traversal
def inorder(node):
    if node is None:
        return 
    inorder(node.left)
    print(node.val, end = " ")
    inorder(node.right)

# inorder(node)