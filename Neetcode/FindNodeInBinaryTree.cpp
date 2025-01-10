#include <iostream>
#include <deque>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        deque<TreeNode*> d;
        deque<TreeNode*> d_c;
        d_c.push_back(cloned);
        d.push_back(original);
        while (d.size() > 0) {
            TreeNode* node = d.front();
            TreeNode* c_node = d_c.front();
            d.pop_front();
            d_c.pop_front();
            if (node == target) {
                return c_node;
            }

            if (node->left != nullptr) {
                d.push_back(node->left);
                d_c.push_back(c_node->left);
            }

            if (node->right != nullptr) {
                d.push_back(node->right);
                d_c.push_back(node->right);
            }
        }
        return nullptr;
    }
};

Solution sol;
 