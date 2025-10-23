/*Given the root of a binary tree, return the level order traversal of
its nodes' values. (i.e., from left to right, level by level).
Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:
Input: root = [1]
Output: [[1]]
Example 3:
Input: root = []
Output: []
*/
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
        left = NULL;
        right = NULL;
    }
};
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans ;
        queue<TreeNode*> q ;

        if(!root) return ans ;

        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int>level;

            for(int i=0;i<size;i++){
                
                TreeNode* Node = q.front();
                q.pop();

                if(Node->left != NULL) q.push(Node->left);
                if(Node->right != NULL) q.push(Node->right);

                level.push_back(Node->data);

            }

            ans.push_back(level);

        }
        return ans ; 
    }
};


int main(){

    Solution object ;

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6); 

    vector<vector<int>> result = object.levelOrder(root);

     for (auto eachlevel : result) {
        for (auto val : eachlevel) cout << val << " ";
        cout << endl;
    }

    return 0;
}