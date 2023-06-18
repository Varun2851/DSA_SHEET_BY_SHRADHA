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
    ListNode* partition(ListNode* head, int x) {
        node*curr = head;
        node*next;

        node*ah = NULL;
        node*at = NULL;
        node*bh = NULL;
        node*bt = NULL;

        while(curr){
            next = curr->next;

            if(curr->val < x){
                if(ah == NULL){
                    ah = at = curr;
                    curr->next = NULL;
                }
                else{
                    at->next = curr;
                    at = at->next;
                    curr->next = NULL;
                }
            }
            else{
                if(bh == NULL){
                    bh = bt = curr;
                    curr->next = NULL;
                }
                else{
                    bt->next = curr;
                    bt = bt->next;
                    curr->next = NULL;
                }
            }
            curr = next;
        }

        if(ah){
            at->next = bh;
            return ah;
        }
        return bh;
    }
};