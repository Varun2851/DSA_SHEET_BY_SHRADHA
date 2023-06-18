/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#define node ListNode
class Solution {
public:
    void solve(node*head,vector<int>&ans,stack<int>&st){
        //base case
        if(head == NULL){
            return;
        }
        solve(head->next,ans,st);

        int curr_val = head->val;

        while(!st.empty() and st.top() <= curr_val){
            st.pop();
        }

        if(st.empty()){
            ans.push_back(0);
        }
        else{
            ans.push_back(st.top());
        }
        st.push(curr_val);
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        stack<int>st;
        
        solve(head,ans,st);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};