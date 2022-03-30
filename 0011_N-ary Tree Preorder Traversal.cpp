    void solve(Node* root,vector<int> &ans)
    {
        if(!root) return;
        ans.push_back(root->val);
        for(auto node : root->children)
        {
            solve(node,ans);
        }
    }
    
    vector<int> preorder(Node* root) 
    {
        vector<int> ans;
        solve(root,ans);
        return ans;
    }
