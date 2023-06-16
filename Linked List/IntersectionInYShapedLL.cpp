#define node ListNode
class Solution {
public:
    int length(node*head){
        int cnt = 0;

        while(head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA = length(headA);
        int lengthB = length(headB);

        int diff = abs(lengthA-lengthB);

        node*temp1 = headA;
        node*temp2 = headB;

        if(lengthA < lengthB){
            while(diff--){
                temp2 = temp2->next;
            }
        }
        else{
            while(diff--){
                temp1 = temp1->next;
            }
        }

        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;

    }
};