/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online
*******************************************************************************/

// count the number of nodes and sum of nodes 
/*
                   1
                 /  \
                2    3
              /  \  / \
             4   5 6   7  
*/

#include <iostream>

using namespace std;

    struct Node{
        int data;
        struct Node* left;
        struct Node* right;
        
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
    };
    
   int countNodes(Node* root)
   {
       if(root == NULL)
       {
           return 0;
       }
       
       return countNodes(root->left) + countNodes(root->right) + 1;
   }
   
   int sumOfNodes(Node* root)
   {
       if(root == NULL)
       {
           return 0;
       }
       
       return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
   }

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    cout << countNodes(root) << endl;
    cout << sumOfNodes(root);
    return 0;
}

