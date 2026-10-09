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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
         if(head==NULL ){
            return head;
        }
        ListNode* curr =head;
        ListNode* prev =NULL;
        
       
        if(head->val==val){
            head =head->next;
            curr=curr->next;
            return removeElements(head,val);
        }
        while( curr != NULL && curr->val!=val){
            prev =curr;
            curr=curr->next;
        }
        if (curr == NULL) { return head; }
        if(curr->val==val){
            prev->next =curr->next;
            curr->next =NULL;
            curr=prev->next;
            return removeElements(head,val);
        }
        return head;
        
    }
};