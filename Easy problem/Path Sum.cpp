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

bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;

    if (!root->left && !root->right)
        return targetSum == root->val;

    return hasPathSum(root->left, targetSum - root->val) ||
           hasPathSum(root->right, targetSum - root->val);
}


int main(){

    TreeNode* root = new TreeNode(-2);

    TreeNode* node = new TreeNode(-3);
    root -> right  = node ;

    cout << hasPathSum(root , -5) << endl;
    return 0 ;
}