#include<iostream>
using namespace std;

struct TreeNode { 
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int count = 0;
void Traversal(TreeNode* node)
{
    if(!node) return ;
    count++;
    Traversal(node->left);
    Traversal(node->right);
}
int countNodes(TreeNode* root)
{
    Traversal(root);
    return count;
}
int main(){

    return 0;
}