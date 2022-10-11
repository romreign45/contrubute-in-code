/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>v;
        queue<Node*>q;
        q.push(root);
        if(root==nullptr)
            return v;
        while(1)
        {
            int sz=q.size();
            if(sz==0)
            return v;
            vector<int>data;
            while(sz>0)
            {
                Node* temp=q.front();
                q.pop();
                data.push_back(temp->val);
                 for(Node* ch : temp->children)
                    q.push(ch);
                // if(temp->children!= nullptr)
                //     q.push(temp->children);
                // if(temp->right!=nullptr)
                //     q.push(temp->right);
                sz--;
                
            }
            v.push_back(data);
            
        }
        return v;
        
    }
};

// Time Complexity: O(n) where n is the number of nodes
// Auxiliary Space: O(n)
