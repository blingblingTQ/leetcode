#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if(p == NULL && q == NULL)
            return true;
        else if((p == NULL && q != NULL) || (p != NULL && q == NULL))
            return false;
        else
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right) && (p->val == q->val);
    }
};


int main(void)
{
    Solution solution;
    cout << solution.isSameTree(NULL, NULL) << endl;
    return 0;
}
