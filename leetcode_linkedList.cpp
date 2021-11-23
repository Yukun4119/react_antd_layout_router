#include<bits/stdc++.h> 
using namespace std;
int len = 5;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // todo:
        return head;
    }
};

int main(){
    #ifndef ONLINE_JUDEG     
    freopen("./input.txt", "r", stdin);
    freopen("./output.txt", "w", stdout);
    #endif ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // input
    ListNode *dummy = new ListNode(-1);
    ListNode *curNode = dummy;
    for(int i = 0 ; i < len; ++i){
        int tmpVal;
        cin >> tmpVal;
        LisNode* thisNode = new ListNode(tmpVal);
        curNode -> next = thisNode;
        curNode = thisNode;
    }
    Solution s;
    ListNode *res = s.reverseList(dummy -> next);

    // output
    while(res){
        cout << res -> val << " ";
        res = res -> next;
    }
    return 0;
}t
