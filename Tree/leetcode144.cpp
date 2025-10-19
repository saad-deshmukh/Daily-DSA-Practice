#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

 void Preorder(Node* root, vector<int>& ans ){
         
         if(!root) return ;

         ans.push_back(root->data);
         Preorder(root->left,ans);
         Preorder(root->right,ans);

    }
    vector<int> preorderTraversal(Node* root) {
        
        vector<int> ans ;

        Preorder(root,ans);
        return ans ; 
    }

    int main (){
    
        Node* root = new Node(12);
        root->left = new Node(8);
        root->right = new Node(18);
        root->left->left = new Node(5);
        root->left->right = new Node(10);
        root->right->right = new Node(20);
        
        vector<int> ans = preorderTraversal(root);

        for (int i=0;i<ans.size();i++){
            cout << ans[i] << " " ;      
        }
    }
