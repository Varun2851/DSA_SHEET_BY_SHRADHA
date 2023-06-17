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
    node*mid(node*head){
        node*slow = head;
        node*fast = head->next;

        //node*current = head;

        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    node*reverse(node*head){
        node*current = head;
        node*prev = NULL;
        node*n = NULL;

        while(current){
            n = current->next;
            current->next = prev;
            prev = current;
            current = n;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        node*temp = mid(head);
        node*temp1 = temp->next;
        temp->next = NULL;

        node*temp2 = reverse(temp1);


        while(head and temp2){
           node* temp3 = head->next;
           node*temp4 = temp2->next;

           head->next = temp2;
           temp2->next = temp3;
           head = temp3;
           temp2 = temp4;

        }

    }
};