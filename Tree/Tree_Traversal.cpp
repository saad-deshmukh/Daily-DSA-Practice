#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// inorder traversal  left root right

void inorder(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;

    inorder(root->left, ans);  // visiting left
    ans.push_back(root->data); // visiting root
    inorder(root->right, ans); // visiting right
}
// preorder traversal root left right
void preorder(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;

    ans.push_back(root->data);  // visiting root first
    preorder(root->left, ans);  // Then left subtree
    preorder(root->right, ans); // Then right subtree
}
// postorder traversal left right root
void postorder(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;

    postorder(root->left, ans);  // Visit left subtree
    postorder(root->right, ans); // Visit right subtree
    ans.push_back(root->data);   // Visit root last
}

void print(vector<int> &ans, string type)
{

    cout << type <<" traversal is: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(13);
    root->left->left = new TreeNode(45);
    root->right = new TreeNode(23);
    root->right->right = new TreeNode(32);
    root->right->right->right = new TreeNode(31);
    root->left->right = new TreeNode(45);

    // inorder traversal
    vector<int> ans;
    inorder(root, ans);
    print(ans,"Inorder");

    // preorder traversal
    vector<int> ans1;
    preorder(root, ans1);
    print(ans1,"Preorder");

    // postorder traversal
    vector<int> ans2;
    postorder(root, ans2);
    print(ans2 ,"Postorder");
}
