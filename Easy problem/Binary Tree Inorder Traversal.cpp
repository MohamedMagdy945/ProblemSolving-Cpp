#include<iostream>
#include <vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> order;

void Traversal(TreeNode* root) {
        if (root == nullptr) return ;
        Traversal( root->left);
        order.push_back(root -> val);
        Traversal(root -> right);
}
vector<int> inorderTraversal(TreeNode* root) {
    Traversal(root);
    return order;
}

int main(){
    TreeNode* n9 = new TreeNode(9);
    TreeNode* n7 = new TreeNode(7);
    TreeNode* n6 = new TreeNode(6);
    TreeNode* n8 = new TreeNode(8, n9, nullptr);
    TreeNode* n4 = new TreeNode(4);
    TreeNode* n5 = new TreeNode(5, n6, n7);
    TreeNode* n2 = new TreeNode(2, n4, n5);
    TreeNode* n3 = new TreeNode(3, nullptr, n8);
    TreeNode* root = new TreeNode(1, n2, n3);
   
    inorderTraversal(root);
    for (int i = 0 ; i < order.size() ; i++){
        cout << order[i] << " ";
    }
    delete n9;
    delete n7;
    delete n6;
    delete n8;
    delete n4;
    delete n5;
    delete n2;
    delete n3;
    delete root;
    return 0;
}