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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int> m;
        while(!q.empty())
        {
            int size = q.size();
            vector<int> v;
            for(int i = 0;i < size;i ++)
            {
                TreeNode* mp = q.front();
                q.pop();
                if(mp->left != NULL)
                    q.push(mp->left);
                if(mp->right != NULL)
                    q.push(mp->right);
                    v.push_back(mp->val);
            }
            m.push_back(v[0]);
        }
        return m[m.size() - 1];
    }
};
