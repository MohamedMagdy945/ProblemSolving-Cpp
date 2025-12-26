#include<iostream>
#include <queue>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


int minDepth(TreeNode* root) {
    if (!root) return 0;
    queue<TreeNode*> q;
    q.push(root);
    int depth = 0 ;
    while (!q.empty())
    {
        
        int s = q.size();
        for(int i = 0 ; i < q.size() ; i++)
        {
            TreeNode* node = q.front();
            q.pop();
            if (!node->left && !node->right)
                return depth;
            if (node->left)
            q.push(node->left);
            if (node->right)
            q.push(node->right);
        }
        depth++;
    }
    return 0;
}

int main(){

    TreeNode* n15 = new TreeNode(15);
    TreeNode* n7  = new TreeNode(7);
    TreeNode* n20 = new TreeNode(20, n15, n7);
    TreeNode* n9  = new TreeNode(9); 
    TreeNode* root = new TreeNode(3, n9, n20);

    cout << minDepth(root) << endl ;

    delete n15;
    delete n7;
    delete n20;
    delete n9;
    delete root;
    return 0 ;
}