#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
      };
class Solution{

public:
int max_len;
int traversal(TreeNode* root, bool left){
if(root == NULL)
    return -1;

int lt = traversal(root->left,false);
int rt = traversal(root->right,true);
int ans = max(lt+1,rt+1);
max_len = max(max_len,ans);

if(left == true)
    return lt+1;
else
    return rt+1;
}
int longestZigZag(TreeNode* root) {


  
    }
int main(){
    
}
};