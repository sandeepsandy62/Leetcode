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
 #include<bits/stdc++.h>
class Solution {
public:
    vector<int> findMode(TreeNode* root) {

        vector<int>ans ;
        
        if(root == NULL) return ans;

        unordered_map<int,int>mp;
        queue<TreeNode*>q;
        q.push(root);

        while(q.size()){
            TreeNode* node = q.front() ;
            q.pop();
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);

            mp[node->val]++;
        }

        int min = 0;
        for(auto x : mp){
            if(x.second >= min) min = x.second;
        }

        for(auto x : mp){
            if(x.second == min) ans.push_back(x.first);
        }

        return ans;
    }
};