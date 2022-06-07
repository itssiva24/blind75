#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

class Solution {
    public:
        TreeNode *invertTree(TreeNode *root)
        {
            if (!root)
                return nullptr;

            TreeNode *temp = root->left;
            root->left = root->right;
            root->right = temp;
            invertTree(root->left);
            invertTree(root->right);
            return root;
    }

    void traverseTree(TreeNode* root){
        if(!root)
            return;
        cout << root->val << ", ";
        traverseTree(root->left);
        traverseTree(root->right);
    }

};

int main(){
    Solution mySolution;
    TreeNode *seven = new TreeNode(7);
    TreeNode *six = new TreeNode(6);
    TreeNode *five = new TreeNode(5);
    TreeNode *four = new TreeNode(4);
    TreeNode *three = new TreeNode(3, six, seven);
    TreeNode *two = new TreeNode(2, four, five);
    TreeNode *one = new TreeNode(1, two, three);
    mySolution.traverseTree(one);
    cout << "\n";
    mySolution.invertTree(one);
    mySolution.traverseTree(one);
}