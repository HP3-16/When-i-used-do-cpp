 #include<bits/stdc++.h>
 using namespace std;
  vector<int> order;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
   
    void traversal(TreeNode* root){
        if(root == NULL)
            return;
        traversal(root->left);
        order.push_back(root->val);
        traversal(root->right);
    }
 vector<int> inorderTraversal(TreeNode* root) {
        traversal(root);
    return order;
    }

    int main(){
        TreeNode* root = new TreeNode(1);
        TreeNode* l = new TreeNode(2);
        TreeNode* r = new TreeNode(3);
        TreeNode* ll = new TreeNode(4);
        root->left = l;
        root->right = r;
        l->left = ll;

        vector<int> sol = inorderTraversal(root);
        for(int ele:sol)
        cout<<ele<<" ";

    }