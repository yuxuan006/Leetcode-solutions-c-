//Remove Duplicates from Sorted List
//Given a sorted linked list, delete all duplicates such that each element appear only once.

//For example,
//Given 1->1->2, return 1->2.
//Given 1->1->2->3->3, return 1->2->3.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode *p, *q;
        p = head; q = head->next;
        while(q->next != NULL){
            if(q->val != p->val){
                p = p->next;
                q = p->next;
            }
            else{
                p->next = q->next;
                q = p->next;
            }
        }
        while(p->next != NULL){
            if(q->val != p->val){
                p = p->next;
            }
            else{
                p->next = NULL;
            }
        }
        return head;
    }
};