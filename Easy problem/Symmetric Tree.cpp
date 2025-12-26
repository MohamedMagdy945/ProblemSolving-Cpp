#include<iostream>
#include <vector>
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

bool isMirror(TreeNode* t1, TreeNode* t2) {
    if (!t1 && !t2) return true;  
    if (!t1 || !t2) return false;   
    if (t1->val != t2->val) return false;
    return isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
}

bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    return isMirror(root->left, root->right);
}

int main(){

    TreeNode* n3_left = new TreeNode(3);
    TreeNode* n4_left = new TreeNode(4);
    TreeNode* n4_right = new TreeNode(4);
    TreeNode* n3_right = new TreeNode(3);

    TreeNode* n2_left = new TreeNode(2, n3_left, n4_left);
    TreeNode* n2_right = new TreeNode(2, n4_right, n3_right);

    TreeNode* root = new TreeNode(1, n2_left, n2_right);

    cout<< isSymmetric(root) <<endl ;


    delete n3_left;
    delete n4_left;
    delete n4_right;
    delete n3_right;
    delete n2_left;
    delete n2_right;
    delete root;
    return 0;
}