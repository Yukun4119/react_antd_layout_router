#include<bits/stdc++.h> 
using namespace std;
int len = 7;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;
        invertTree(root -> left);
        invertTree(root -> right);
        swap(root -> left, root -> right);
        return root;
    }
};

void recreate(TreeNode* root, vector<TreeNode*>& nodeList, int index){
    if(index >= len)
        return;
    if(!root) {
        nodeList[index] = nullptr;
        rturn;
    }
    nodeList[index] = root;
    recreate(root -> left, nodeList, index * 2 + 1);
    recreate(root -> right, nodeList, index * 2 + 2);
}

int main(){
    #ifndef ONLINE_JUDEG     
    freopen("./input.txt", "r", stdin);
    freopen("./output.txt", "w", stdout);
    #endif ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // input
    vector<TreeNode*> nodeList;
    for(int i = 0 ; i < len; ++i){
        string tmpVal;
        cin >> tmpVal;
        if(tmpVal != "null"){
            TreeNode* thisNode = new TreeNode(stoi(tmpVal));
            nodeList.push_back(thisNode);
        }
        else{
            nodeList.push_back(nullptr);
        }
    }
    // create tree
    for(int i = 0; i < len / 2; ++i){
        nodeList[i] -> left = nodeList[i * 2 + 1];
        nodeList[i] -> right = nodeList[i * 2 + 2];
    }

    Solution s;
    TreeNode* res = s.invertTree(nodeList[0]);

    // recreate tree
    // for(int i = 0;  i < len; ++i){
    //     nodeList[i] = nullptr;
    // }
    recreate(nodeList[0], nodeList, 0);

    // output
    cout << "output in line" << endl;
    for(int i = 0 ; i < len; ++i){
        if(nodeList[i]){
            cout << nodeList[i] -> val << " ";
        }
        else{
            cout << "null" << " ";
        }
    }
    cout << endl;

    cout << "output in tree" << endl;
    int cnt = 0;
    int numInLine = 1;
    while(true){
        for(int j = 0; j < numInLine; ++j, ++cnt){
            if(cnt >= len){
                break;
            }
            if(nodeList[cnt]){
                cout << nodeList[cnt] -> val << " ";
            }
            else{
                cout << "null" << " ";
            }
        }
        if(cnt >= len){
            break;
        }
        cout << endl;
        numInLine *= 2;
    }
    return 0;
}e
