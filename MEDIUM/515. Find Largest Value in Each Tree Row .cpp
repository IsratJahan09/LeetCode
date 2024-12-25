/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
       vector<int>ans;
       if(!root) return ans;

       queue<TreeNode*>q;
       q.push(root);

       while(!q.empty()){
        int l = q.size();
        int M = INT_MIN;
         
        for(int i = 0; i<l; i++){
            TreeNode* r = q.front();
            q.pop();
          
            M = max(M, r->val);
          
            if(r->left!=nullptr)
            q.push(r->left); 

            if(r->right!=nullptr)
            q.push(r->right); 
        }
        ans.push_back(M);
       }
       return ans;

    }
};
