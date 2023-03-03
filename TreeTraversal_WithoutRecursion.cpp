/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {

    vector<int> V;
   // V.clear();
    stack<TreeNode *> stk;

    TreeNode *curr = A;

    while(curr != NULL || !stk.empty())
    {
        while(curr != NULL)
        {
            stk.push(curr);
            curr = curr->left;
        }

        curr = stk.top();
        stk.pop();
        V.push_back(curr->val);
        curr = curr->right;
    }

    return V;
   
}


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// void helper(TreeNode* A, vector<int>& V)
// {
//     if(A != NULL)
//     {
//         V.push_back(A->val);
//         helper(A->left, V);
//         helper(A->right, V);
//     }

// }

// vector<int> Solution::preorderTraversal(TreeNode* A) {

//     vector<int> V;

//     helper(A,V);

//     return V;
    
// }

vector<int> Solution::preorderTraversal(TreeNode* A) {

        vector<int> V;

        stack<TreeNode*> stk;
        stk.push(A);

        while(!stk.empty())
        {
           TreeNode* curr = stk.top();
           stk.pop();

           V.push_back(curr->val);

            if(curr->right != NULL)
           {
               stk.push(curr->right);
           }

           if(curr->left != NULL)
           {
               stk.push(curr->left);
           }



        }

        return V;

    
}


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 * 
 * typedef struct TreeNode treenode;
 * 
 * treenode* treenode_new(int val) {
 *     treenode* node = (treenode *) malloc(sizeof(treenode));
 *     node->val = val;
 *     node->left = NULL;
 *     node->right = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Root pointer of the tree 
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */

vector<int> Solution::postorderTraversal(TreeNode* A) {

    if(A == nullptr)
    {
        return;
    }
    vector<int> V;

    stack<TreeNode*> s1,s2;
    s1.push(A);

    while(!s1.empty())
    {
        TreeNode* curr = s1.top();
        s1.pop();
        s2.push(curr);

        if(curr->left != nullptr)
        {
            s1.push(curr->left);
        }
    }    
}
