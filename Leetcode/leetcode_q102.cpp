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

vector<vector<int>> final_ans;

vector<vector<int>> levelOrder(TreeNode* root) {

deque<int> mq;
mq.push_back(root->val);


while(mq.size()>0){

int count = mq.size();
    vector<int> temp;
for(int i=0;i<count;i++){
    temp.push_back(int(mq.front()));
    mq.pop_front();

    if(root->left!=NULL)
        mq.push_back(root->left->val);

    if(root->right!=NULL)
        mq.push_back(root->right->val);

}
    final_ans.push_back(temp);
}

return final_ans;

    }

int main(){

TreeNode* head = new TreeNode(50);
TreeNode* l = new TreeNode(25);
TreeNode* r = new TreeNode(75);
TreeNode* ll = new TreeNode(12);
TreeNode* lr = new TreeNode(37);
TreeNode* rl = new TreeNode(62);
TreeNode* rr = new TreeNode(87);
head->left = l;
head->right = r;
l->left = ll;
l->right = lr;
r->left = rl;
r->right = rr;


vector<vector<int>> sol = levelOrder(head);
for (int i = 0; i < sol.size(); i++) {
        for (int j = 0; j < sol[i].size(); j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }


}