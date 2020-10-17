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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode *temp=head;
        int n=1;
        while(temp->next){
            n++;
            temp=temp->next;
        }
        k=k%n;
        
        auto new_tail=temp;
        temp->next=head;
        int a=n-k;
        while(a--){new_tail=new_tail->next;}
        auto nhead=new_tail->next;
        new_tail->next=NULL;
        
        return nhead;
    }
};
